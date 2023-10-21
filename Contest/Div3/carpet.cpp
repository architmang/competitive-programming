#include<bits/stdc++.h>
using namespace std;
string vika = "vika";
bool isSub(string a, string b, int n, int m)
{
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            i++;
        }
        j++;
    }
    return i==n;
}
int solve()
{
    int i,j,n,m;
    cin>>n>>m;
    if(m<4)
    {
        cout<<"NO\n";
        return 0;
    }
    string s;
    vector< string > v;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    int check=0;
    for(i=0;i<n;i++)
    {
        if(isSub(vika, v[i], 4, m))
        {
            check=1;
            break;
        }
    }
    return check;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        if(solve()==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}