#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    int subtree;
    struct node *l, *r, *parent;
};

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
