#include <bits/stdc++.h>
using namespace std;

vector<int> vis, dis;

void dfs(int u, int k)
{
    vis[u]=1;
    dis[u]=k;
    vector<int> neigh;
    int par = (int)(u/2);
    neigh.push_back(2*u);
    neigh.push_back(2*u+1);
    neigh.push_back(par);
    for(int i=0;i<3;i++)
    {
        if(vis[i]) continue;
        else 
        {
            dfs(neigh[i], k+1);
        }
    }
}

void solve() {
    int n, x, k;
    cin>>n>>x>>k;
    for(int i=0;i<n;i++)
    {
        vis[i]=-1;
        dis[i]=0;
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(dis[i]==k) cnt++;
    }
    cout<<cnt;
    return;    
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
