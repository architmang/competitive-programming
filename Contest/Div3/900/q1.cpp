#include<bits/stdc++.h>
using namespace std;

vector<int> fmap;

void solve() {
    int n,k, ans=0;
    cin>>n>>k;
    vector<int> a;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            ans =1;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}