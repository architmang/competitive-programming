#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int t,cnt=0;
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    while(a<b)
    {
        cnt+=1;
        a=a+c;
    }
    cout<<(cnt+1)/2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}