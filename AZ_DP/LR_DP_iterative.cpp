// form 4 std problem
#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int done[1010][1010];
vector<int> arr;
    
int main()
{
    int n;
    cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int len=1;len<=n;len++)
    {
        for(int l=0;l<=n-len;l++)
        {
            int r = l+len-1;
            if(len==1) dp[l][r] =  arr[l];
            int ans=INT_MIN;
            ans = max(ans, arr[l]-dp[l+1][r]);
            ans = max(ans, arr[r]-dp[l][r-1]);
            dp[l][r] = ans;
        }
    }
    return 0;
}