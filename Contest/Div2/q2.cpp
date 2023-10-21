#include <iostream>
#include <vector>

using namespace std;

struct node
{
    // two variable one denote the node
    // and other the weight
    int to, weight;
};
  
// vector to store edges
vector <node> edges[200005];

void zeroOneBFS(int src)
{
    // Initialize distances from given source
    int dist[V];
    for (int i=0; i<V; i++)
        dist[i] = INT_MAX;
  
    // double ende queue to do BFS.
    deque <int> Q;
    dist[src] = 0;
    Q.push_back(src);
  
    while (!Q.empty())
    {
        int v = Q.front();
        Q.pop_front();
  
        for (int i=0; i<edges[v].size(); i++)
        {
            // checking for the optimal distance
            if (dist[edges[v][i].to] > dist[v] + edges[v][i].weight)
            {
                dist[edges[v][i].to] = dist[v] + edges[v][i].weight;
  
                // Put 0 weight edges to front and 1 weight
                // edges to back so that vertices are processed
                // in increasing order of weights.
                if (edges[v][i].weight == 0)
                    Q.push_front(edges[v][i].to);
                else
                    Q.push_back(edges[v][i].to);
            }
        }
    }
    cout << dist[i] << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, a, b;
        cin >> n>>k>>a>>b;
        vector<pair<int, int>> cord;
        cord.resize(n);

        for (int i = 0; i < n; i++) {
            cin >> cord[i].first>>cord[i].second;
        }

        int cost=0;
        if(a==b){
            cout<<"0"<<endl;
            return 0;
        }
        else
        {
            cost = fun(graph, a, b);
            cout<<cost<<endl;
        }

    }

    return 0;
}
