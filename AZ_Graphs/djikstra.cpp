#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> vis(n, 0);
        vector<int> dis(n, INT_MAX);
        vector<pair<int, int>> g[200];
        
        for(auto vec: times)
        {
            int src = vec[0]-1;
            int des = vec[1]-1;
            int wt = vec[2];
            g[src].push_back({des, wt});
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        dis[k-1] = 0;
        pq.push({0, k-1});

        while(pq.empty()!=1)
        {
            auto c = pq.top();
            pq.pop();
            int ndis = c.first;
            int node = c.second;

            if(ndis>dis[node]) continue;

            for(auto vec: g[node])
            {
                int anode = vec.first;
                int awt = vec.second;

                if(ndis + awt < dis[anode])
                {
                    dis[anode] = ndis + awt;
                    pq.push({dis[anode], anode}); 
                }
            }
        }

        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(dis[i]>ans) ans = dis[i];
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};

int main()
{
    Solution t;
    return 0;
}