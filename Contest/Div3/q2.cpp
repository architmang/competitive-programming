#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> d,s;
    d.resize(n);
    s.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>d[i]>>s[i];
    }
    int max=1;
    for(int k=1;;k++)
    {
        int safe=1;
        for(int i=0;i<n;i++)
        {
            if(2*(k-d[i])>=s[i]) safe=0;
        }
        if(safe==1) max=k;
        else break;
    }
    cout<<max<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}