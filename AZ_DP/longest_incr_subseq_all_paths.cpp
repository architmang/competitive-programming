#include<bits/stdc++.h>
using namespace std;
int dp[10001];
vector<int> prevs, a;
void printLIS(int p)
{
    if(p!=-1)
    {
        printLIS(prevs[p]);
        cout<<" "<<a[p];
    }
    return;
}
int rec(int level)
{
    if(level<0) return 0;
    if(dp[level]!=-1) return dp[level]; //cache

    int ans;
    for(int last=0; last<level;last++)
    {
        if(a[last]<a[level])
        {
            ans = rec(last)+1;
            prevs[level]=last;
        }
    }
    return dp[level]=ans;
}
int main()
{
    int n, maxlen=0;
    cin>>n;
    a.resize(n);
    prevs.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    memset(dp, -1, sizeof(dp));
    for(int i=0;i<n;i++)
    {
        prevs[i]=-1;
        if(rec(i)>maxlen) maxlen = rec(i);
    }
    for(int i=0;i<n;i++)
    {
        if(dp[i]==maxlen)
        {
            printLIS(i);
            cout<<endl;
        }
    }
    return 0;
}