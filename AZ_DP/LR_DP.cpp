// form 4 std problem
#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int done[1010][1010];
vector<int> arr;
int rec(int l, int r)
{
    if(l==r) return arr[l];
    if(done[l][r]) return dp[l][r];
    int ans=INT_MIN;
    ans = max(ans, arr[l]-rec(l+1, r));
    ans = max(ans, arr[r]-rec(l, r-1));
    done[l][r]=1;
    return dp[l][r] = ans;
}
int main()
{
    int n;
    cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<rec(0,n-1)<<endl;
    return 0;
}