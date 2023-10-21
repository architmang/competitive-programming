#include<bits/stdc++.h>
using namespace std;

vector<int> color;
bool isbip = true;

bool bipartite(vector<vector<int>>& isConnected) {
    int n = isConnected.size();
    color.resize(n);
    for(int i=0;i<n;i++) color[i]=-1;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        if(color[i]==-1)
        {
            q.push(i);
            color[i]=0;

            while(!q.empty())
            {
                int k = q.front();
                q.pop();
                for(auto v: isConnected[k])
                {
                    if(color[v]==-1)
                    {
                        color[v]=1-color[k];
                        q.push(v);
                    }
                    else if(color[v]==color[k])
                    {
                        isbip=false;
                        return isbip;
                    }
                }
            }
        }
    }
    return isbip;
}

int main()
{

    return 0;
}