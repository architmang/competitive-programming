#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dis(n, INT_MAX);
        vector<pair<int, int>> g[200];

        dis[k] = 0;
        for(int i=0; i<n-1; i++)
        {
            for(int i=0; i<times.size(); i++)
            {
                int src = i;
                int des = times[i][0];
                int wt = times[i][1];

                if(dis[des] > dis[src] + wt) dis[des] = dis[src] + wt; 
            }
        }        
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(dis[i]>ans) ans = dis[i];
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};

int main()
{
    Solution t;
    return 0;
}