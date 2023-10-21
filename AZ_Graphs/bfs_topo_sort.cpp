#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        // topo sort using bfs
        queue<int> q;
        vector<int> indegree(n+1, 0);
        vector<int> maxtime(n+1, 0);
        vector<int> g[50010];
        for(int i=0; i<relations.size(); i++)
        {
            int prev = relations[i][0]-1;
            int next = relations[i][1]-1;
            g[prev].push_back(next);
            indegree[next]++;
        }
        for(int i=0; i<n; i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
                maxtime[i] = time[i];
            }
        }
        while(q.empty()!=1)
        {
            int k = q.front();
            q.pop();
            for(auto  it: g[k])
            {
                maxtime[it] = max( maxtime[k] + time[it], maxtime[it] );
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(maxtime[i] > ans)
            {
                ans = maxtime[i];
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}