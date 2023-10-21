#include <bits/stdc++.h>
using namespace std;

long long int n, k, x;

void solve() {
    cin >> n >> k >> x;
    if (k*(k+1)/2>x || n*(n+1)/2-(n-k)*(n-k+1)/2<x) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
