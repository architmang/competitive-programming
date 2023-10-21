#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxtime[50010];
    vector<int> g[50010];

    int dfs(int i, vector<int>& time)
    {
        if(maxtime[i]!=-1) return maxtime[i];

        if(g[i].size()==0) return time[i];

        int ans = 0;
        for(auto neigh: g[i])
        {
            ans = max(ans, dfs(neigh, time));
        }

        return maxtime[i] = ans + time[i];
    }
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        for(int i=0; i<relations.size(); i++)
        {
            int prev = relations[i][0]-1;
            int next = relations[i][1]-1;
            g[prev].push_back(next);
        }
        memset(maxtime, -1, sizeof(maxtime));
         for(int i=0; i<n; i++)
        {
            ans = max(ans, dfs(i, time));
        }
        return ans;
    }
};

int main()
{
    return 0;
}