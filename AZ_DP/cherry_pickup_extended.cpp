// form 4 std problem
#include<bits/stdc++.h>
using namespace std;

int arr[1010][1010];
int dp[101][101][101][101];
int n,m;

bool check(int x, int y)
{
    if(x>=n || y>=m || x<=0 || y<=0) return false;
    return true;
}
int rec(vector<int> rows, int c0)
{
    vector<int> cols;
    if(!check(r1, c1) || !check(r2, c2)) return INT_MIN; //prune
    if(r1==n-1 && r2==n-1 && c1==m-1 && c2==m-1) return arr[r1][c1]; //base
    if(dp[r1][c1][r2][c2]!=-1) return dp[r1][c1][r2][c2]; //cache
    
    int ans;
    
    if(r1==r2 && c1==c2) ans = arr[r1][c1];
    else ans = arr[r1][c1] + arr[r2][c2];
    ans+ = max(rec(r1+1, c1, r2+1, c2), rec(r1, c1+1, r2, c2+1), rec(r1+1, c1, r2, c2+1), rec(r1, c1+1, r2+1, c2));
    
    return dp[r1][c1][r2][c2] = ans;
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