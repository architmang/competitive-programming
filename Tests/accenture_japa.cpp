#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<string, int> > v;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
