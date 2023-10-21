#include<bits/stdc++.h>
using namespace std;
int dp[10001];
vector<int> a;
vector<vector<int> > lis;
vector<int> rec(int level)
{
    if(level==0){
        vector<int> x;
        x.push_back(a[level]);
        return x; //base
    }
    if(dp[level]!=-1) return lis[level]; //cache

    vector<int> curr;
    curr.push_back(a[level]);
    vector<int> newlis;
    for(int last=0; last<level;last++)
    {
        if(a[last]<a[level])
        {
            newlis = lis[last];
            if(newlis.size()+1>curr.size())
            {
                curr = newlis;
                curr.push_back(a[level]);
            }
        }
    }
    return lis[level]=curr;
}
int main()
{
    int n;
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    memset(dp, -1, sizeof(dp));
    lis.resize(n);
    vector<int> curr, best;
    for(int i=0;i<n;i++)
    {
        curr = rec(i);
        if(curr.size()>best.size())
        {
            best = curr;
        }
    }
    for(int i=0;i<best.size();i++)
    {
        cout<<best[i]<<endl;
    }
    return 0;
}