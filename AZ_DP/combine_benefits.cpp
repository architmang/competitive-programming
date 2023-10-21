// form 4 std problem
#include<bits/stdc++.h>
using namespace std;

int x[1010];
int dp[1010][1010];

int rec(int l, int r)
{
    if(l>=r) return 0;
    if(dp[l][r]!=-1) return dp[l][r];
    
    int ans = INT_MIN;
    int sum = 0;
    int total = 0;
    
    for(int mid = l; mid < r; mid++)
    {
        total+=x[mid];
    }
    
    for(int mid = l; mid < r; mid++)
    {
        sum+=x[mid];
        ans = max(ans, rec(l,mid)+rec(mid+1, r)+sum*(total-sum));
    }
    return dp[l][r] = ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    memset(dp, -1, sizeof(dp));
    cout<<rec(0, n-1)<<endl;
    return 0;
}