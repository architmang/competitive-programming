#include<bits/stdc++.h>
using namespace std;
int n, m, r, c;
int dp[1010][1010];
int rec(int r, int c, vector<vector<int> > &arr, vector<vector<int> > &vis)
{
    if(r<0 || c<0) return 0;
    if(r==0 && c==0) return arr[0][0];
    if(vis[r][c]!=-1) return dp[r][c]; //cache

    int ans=INT_MIN;
    if(r!=0)
    {
        ans=max(ans, rec(r-1, c, arr, vis));
    }
    if(c!=0)
    {
        ans=max(ans, rec(r, c-1, arr, vis));
    }
    ans+=arr[r][c];
    return dp[r][c]=ans;
}
int main()
{
    cin>>n>>m>>r>>c;
    vector<vector<int> > arr(n, vector<int>(m, 0));
    vector<vector<int> > vis(n, vector<int>(m, -1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            dp[i][j]=INT_MIN;
            cin>>arr[i][j];
        } 
    }
    memset(dp, -1, sizeof(dp));
    cout<<rec(r, c, arr, vis)<<endl;
    return 0;
}