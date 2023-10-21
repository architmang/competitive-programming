#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long int> v;
    int k=1;
    for(int i=0;i<100;i++)
    {
        v.push_back(k);
        k=2*k;
    }
    if(n%m==0)
    {
        cout<<"0"<<endl;
        return;
    }
    if(n>m)
    {
        n = n%m;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
