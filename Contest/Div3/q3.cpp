#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}
void solve()
{
    int l,r,a,b;
    cin>>l>>r;
    if(l==r)
    {
        int con=0;
        for(int i=3;i<=sqrt(l);i++)
        {
            if(l%i==0 && l%(l-i)==0)
            {
                con=1;
                cout<<i<<l-i<<endl;
                break;
            }
        }
        if(con==0) cout<<"-1"<<endl;
    }
    else   
    {
        a=2;
        int k=max(2, l-a);
        int con=0;
        while(k+a<=r)
        {
            if(gcd(a,k)!=1)
            {
                cout<<k<<" "<<a<<endl;
                con=1;
                break;
            }
            else k+=1;
        }
        if(con==0) cout<<"-1"<<endl;
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}