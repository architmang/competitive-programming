#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, p;
    cin>>n>>m>>p;
    vector<long long int> a, b, pref;
    a.resize(n);
    b.resize(m);
    pref.resize(m+1);
    long long int price=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    pref[0]=0;
    for(int i=0;i<=m;i++)
    {
        if(i) pref[i]=pref[i-1]+b[i-1];
    }
    for(int i=0;i<n;i++)
    {
        int ind = upper_bound(b.begin(), b.end(), p-a[i]) - b.begin();
        price+=(m-ind)*p;
        price+=pref[ind]+a[i]*(ind);
    }
    cout<<price;    
}

int main() {
    solve();
    return 0;
}
