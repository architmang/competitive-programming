#include <bits/stdc++.h>
using namespace std;

vector<long long int> a;

int rec(vector<int> vis)
{
    int ans = INT_MAX;
    for(int i=0;i<vis.size();i++)
    {
        int elem = a[i];
        vis[i] = 0;
        ans = min(ans, rec(vis));
        vis[i]=1;
    }

}

void solve() {
    int n;
    cin >> n;
    a.resize(n);
    vector<int> vis(n, 1);
    for(int i=0;i<n;i++) cin>>a[i];

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
