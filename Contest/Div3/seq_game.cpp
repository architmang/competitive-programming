#include<bits/stdc++.h>
using namespace std;
string vika = "vika";
void solve()
{
    int i,n,m;
    cin>>n;
    vector<int> b(n, 0), a;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0) a.push_back(b[i]);
        else
        {
            if(b[i]<b[i-1])
            {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
            else
            {
                a.push_back(b[i-1]);
                a.push_back(b[i]);
            }
        }
    }
    m=a.size();
    cout<<m<<endl;
    for(i=0;i<m;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}