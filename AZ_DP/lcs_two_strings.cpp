#include<bits/stdc++.h>
using namespace std;
string a, b;
int dp[1010][1010];
int lcs(int i, int j)
{
    if(i>=a.size() || j>=b.size()) return 0; //base
    //cache
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    ans = max(ans, lcs(i, j+1));
    ans = max(ans, lcs(i+1, j));
    if(a[i]==b[j])
    {
        ans = 1+ lcs(i+1, j+1);
    }
    return dp[i][j]=ans;
}
int main()
{
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            dp[i][j]=-1;
        }
    }
    cout<<lcs(0,0);
    return 0;
}