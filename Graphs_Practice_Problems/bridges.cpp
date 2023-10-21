#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int time = 0;
    void dfs(int i, int par, vector<vector<int>>& adj, vector<vector<int>>& bridges, vector<int>& disc, vector<int>& low, vector<bool>& visited) {
        time++;
        disc[i] = time;
        low[i] = time;
        visited[i] = true;

        for (auto v : adj[i]) {
            if (v == par) continue;
            if (!visited[v]) { // Check visited flag instead of disc
                dfs(v, i, adj, bridges, disc, low, visited);
                low[i] = min(low[i], low[v]);
                if (low[v] > disc[i]) {
                    bridges.push_back({i, v});
                }
            }
            else low[i] = min(low[i], disc[v]);
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> disc, low;
        vector<bool> visited;
        disc.resize(n);
        low.resize(n);
        visited.assign(n, false);
        vector<vector<int>> bridges;
        bridges.clear();
        vector<vector<int>> adj;
        adj.resize(n);
        for (int i = 0; i < connections.size(); i++) {
            int u=connections[i][0];
            int v=connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, i, adj, bridges, disc, low, visited);
            }
        }
        return bridges;
    }
};
int main()
{
    Solution();
    return 0;
}