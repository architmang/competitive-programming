#include <bits/stdc++.h>
using namespace std;

// sliding window 

void solve() {
    string s,t,k;
    cin>>s>>t;
    k = s+"#"+t;
    int n = s.size()+t.size()+1;
    int kmp[n+1];

    kmp[0]=-1;
    int i=0,j=-1;

    while(i<n)
    {
        while(j!=-1 && k[i]!=k[j]) j=kmp[j];
        i++; j++;
        kmp[i]=j;
    }

    cout<<"ending pos"<<endl;

    for(int i=0;i<n+1;i++)
    {
        if(kmp[i]==s.size()) cout<<i-5<<" ";
    }
    cout<<endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
