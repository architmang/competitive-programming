#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> graph;
    vector<int> vis;
    vector<int> path;
    bool dfs(int start)
    {
        vis[start]=1;
            for(auto v: graph[start])
            {
                if(vis[v]==1) return false;
                if(vis[v]==0 && dfs(v)==false) return false;                
            }
        vis[start]=2;
        path.push_back(start);
        return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()==0)
        {
            int i=0;
            while(i<numCourses) path.push_back(i++);
            return path;
        }
        vis.resize(numCourses);
        for(int i=0;i<numCourses;i++) vis[i]=0;
        graph.resize(numCourses+1);
        for(auto v: prerequisites)
        {
            graph[v[1]].push_back(v[0]);
        }
        for(int i=0;i<numCourses;i++)
        {
            if(vis[i]==0 && dfs(i)==false) return {};
        }
        reverse(path.begin(), path.end());
        return path;
    }
};
int main()
{
    Solution();
    return 0;
}