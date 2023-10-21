#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> vis, shortest_path;
    vector<vector<int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    void dfs(int i, int j, vector<vector<int>>& grid, int comp) {
        vis[i][j] = comp;
        for (int k = 0; k < 4; k++) {
            int new_i = i + dir[k][0];
            int new_j = j + dir[k][1];
            if (new_i >= 0 && new_i < grid.size() && new_j >= 0 && new_j < grid[0].size() && grid[new_i][new_j] == 1 && vis[new_i][new_j] == 0) {
                dfs(new_i, new_j, grid, comp);
            }
        }
    }

    void bfs(vector<vector<int>>& grid, int n) {
        queue<pair<int, int>> q;
        for (int i = 0; i < vis.size(); i++) {
            for (int j = 0; j < vis[0].size(); j++) {
                if (vis[i][j] == 1) {
                    q.push({i, j});
                    shortest_path[i][j] = 0;
                }
            }
        }

        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            for (int k = 0; k < 4; k++) {
                int new_i = i + dir[k][0];
                int new_j = j + dir[k][1];
                if (new_i >= 0 && new_i < n && new_j >= 0 && new_j < n && shortest_path[new_i][new_j] == INT_MAX) {
                    shortest_path[new_i][new_j] = shortest_path[i][j] + 1;
                    q.push({new_i, new_j});
                }
            }
        }
    }

    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        vis.resize(n, vector<int>(n, 0));
        shortest_path.resize(n, vector<int>(n, INT_MAX));

        int comp = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && vis[i][j] == 0) {
                    comp++;
                    dfs(i, j, grid, comp);
                }
            }
        }

        bfs(grid, n);

        int minFlips = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (vis[i][j] == 2) {
                    minFlips = min(minFlips, shortest_path[i][j] - 1);
                }
            }
        }

        return minFlips;
    }
};

int main()
{
    Solution();
    return 0;
}