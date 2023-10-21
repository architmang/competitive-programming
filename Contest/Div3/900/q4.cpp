#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,k,Q;
    cin >> n >> k;
    string s;
    cin>>s;
    vector<int> l,r,q;
    l.resize(k);
    r.resize(k);
    for(int i=0;i<k;i++) cin>>l[i];
    for(int i=0;i<k;i++) cin>>r[i];
    cin>>Q;
    q.resize(Q);
    for(int i=0;i<Q;i++) cin>>q[i];
    for(int i=0;i<Q;i++)
    {
        int x=q[i];
        int a,b,ind;
        char c;
        ind = upper_bound(r.begin(), r.end(), x)-r.begin();
        if(r[ind-1]==x) ind = ind-1;
        a = min(x, r[ind]+l[ind]-x)-1;
        b = max(x, r[ind]+l[ind]-x)-1;
        for(int j=a;j<(a+b+1)/2;j++)
        {
            c = s[j];
            s[j] = s[a+b-j];
            s[a+b-j] = c;
        }
    }
    cout<<s<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
