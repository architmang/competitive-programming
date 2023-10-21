#include<bits/stdc++.h>
using namespace std;
string vika = "vika";
int solve()
{
    int i,n,t,j;
    vector < int > a;
    vector< vector <int> > m1, m2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
    }
    if(a[0]!=n) return 0;
    m1.resize(n);
    for(i=0;i<n;i++)
    {
        m1[i].resize(n);
        for(j=n-1;j>=0;j--)
        {
            if(j<=n-1 && j>=n-a[i]) m1[j][i]=1;
            else m1[j][i]=0;
        }   
    }
    m2.resize(n);
    for(j=0;j<n;j++)
    {
        m2[i].resize(n);
        for(i=n-1;i>=0;i--)
        {
            if(j<=n-a[i]) m2[i][j]=1;
            else m2[i][j]=0;
        }   
    }
    int check=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;i++)
        {
            if(m1[i][j]!=m2[i][j]) check=0;
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
        if(solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}