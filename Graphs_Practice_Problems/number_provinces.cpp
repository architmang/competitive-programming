#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> vis;
    int dfs(int node, int comp, vector<vector<int>> v, int n)
    {
        vis[node]=comp;
        for(int i=0;i<n;i++)
        {
            if(i!=node && v[node][i] && !vis[i])
            {
                vis[i]=1;
                dfs(i, comp, v, n);
            }
        }
        return comp;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vis.resize(n);
        for(int i=0;i<n;i++) vis[i]=0;
        int comp=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                comp++;
                dfs(i, comp, isConnected, n);
            }
        }
        return comp;
    }
};

int main()
{
    Solution();
    return 0;
}