#include<bits/stdc++.h>
using namespace std;
int dp[10010][10010][10010][10010];
vector<int> a,b,c;
int solve(int shop, int money_left, int pen, int paper)
{
    if(money_left<0) return -1;
    if(shop==n)
        return min(pen, paper);
    
    //memoization
    if(dp[shop][money_left][pen][paper]!=-1)
        return dp[shop][money_left][pen][paper];
    
    //actual DP
    int ans;
    ans = max(ans, solve(shop+1, money_left, pen, paper));
    ans = max(ans, solve(shop+1, money_left-a[shop], pen+1, paper));
    ans = max(ans, solve(shop+1, money_left-b[shop], pen, paper+1));
    ans = max(ans, solve(shop+1, money_left-a[shop]-b[shop]+d[shop], pen+1, paper+1));

    //save and return
    dp[shop][money_left][pen][paper] = ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    memset(dp, -1, sizeof(dp));
    cout<<solve(0, k, 0, 0)<<endl;
}