#include <bits/stdc++.h>
using namespace std;

int check(string x, string s)
{
    string k;
    k+=s;
    k+="#";
    k+=x;
    
    int n = s.size()+x.size()+1;
    int kmp[n+1];

    kmp[0]=-1;
    int i=0,j=-1;

    while(i<n)
    {
        while(j!=-1 && k[i]!=k[j]) j=kmp[j];
        i++; j++;
        kmp[i]=j;
    }

    int ans = 0;
    for(int i=0;i<n+1;i++)
    {
        if(kmp[i]==s.size()) ans=1;
    }

    return ans;
}

void solve() {
    int n, m;
    string x,s,p;
    
    cin>>n>>m;
    cin>>x>>s;
    
    p = x;
    int cnt=0;
    if(m<=n)
    {
        cout<<"0"<<endl;
        return;
    }
    string k;

    int tot_cnt = 0;
    if(n!=1) tot_cnt = log2(2*m)/log2(n);
    else tot_cnt = log2(2*m);
    
    while(cnt<tot_cnt)
    {
        k = p;
        k+=p;
        if(check(k, s))
        {
            cout<<cnt<<endl;
            return;            
        }
        cnt++;
    }
    if(check(k, s))
    {
        cout<<cnt<<endl;
        return;            
    }
    else
    {
        cout<<"-1"<<endl;
        return;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
