#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,q;
    cin>>n;
    vector<int> a;
    a.resize(n);
    string s;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>s;
    int zero=0, one=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            zero^=a[i];
        }
        else{
            one^=a[i];
        }
    }
    vector<int>prefix(n+1, 0);
    for(int i=1; i<=n; i++){
        prefix[i]^=prefix[i-1]^a[i-1];
    }
    cin>>q;
    while(q--)
    {
        int type;cin>>type;
        if(type==1){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            // for(int i=l;i<=r;i++)
            // {
            //     s[i]=1-s[i];
            //     zero=zero^a[i];
            //     one=one^a[i];
            // }
            zero^=prefix[r+1]^prefix[l];
            one^=prefix[r+1]^prefix[l];
        }
        else{
            int g;
            cin>>g;
            if(g==0){
                cout<<zero<<endl;
            }
            else{
                cout<<one<<endl;
            }
        }
    }
}
signed main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}