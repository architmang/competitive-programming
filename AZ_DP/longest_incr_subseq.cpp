#include<bits/stdc++.h>
using namespace std;
int dp[10001];
vector<int> a;
int rec(int level)
{
    if(level<0) return 0; //base
    if(dp[level]!=-1) return dp[level]; //cache

    int ans=1;
    for(int last=0; last<level;last++)
    {
        if(a[last]<a[level])
        {
            ans = max(ans, 1+rec(last));
        }
    }
    return dp[level]=ans;
}
int main()
{
    int n;
    cin>>n;
    a.resize(n);
    memset(dp, -1, sizeof(dp));
    for(int i=0;i<n;i++) cin>>a[i];
    int best=0;
    for(int i=0;i<n;i++) best=max(best, rec(i));
    cout<<best<<endl;
}