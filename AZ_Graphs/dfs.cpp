#include<bits/stdc++.h>
using namespace std;

bool valid(int a, int b)
{
    bool v = true;
    //
    return v;    
}

vector<vector<int>> k = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}
int timer = 0;
int in[10010];
int out[10010];

void dfs(int x, int y)
{
    timer++;
    in[x][y]=timer;
    vis[x][y]=1;
    for(int t=0;t<3;t++)
    {
        if(valid(x+k[t][0], y+k[t][1]) && !vis(x+k[t][0], y+k[t][1]))
        {
            dfs(x+k[t][0], y+k[t][1]);
        }
    }
    timer++;
    out[x][y]=timer;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    vector<int> vis(n, -1);
    //s store;
    dfs(x,y);
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='.' && vis[i][j]==1)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}