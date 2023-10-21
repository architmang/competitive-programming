// form 4 std problem
#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int done[1010][1010];
int moves[1010][1010];
vector<int> arr;
void printdp(int l, int r)
{
    if(l==r)
    {
        cout<<arr[l]<<" ";
        return;
    }
    if(moves[l][r]==l)
    {
        cout<<arr[l]<<" ";
        printdp(l+1, r);
    }
    else
    {
        cout<<arr[r]<<" ";
        printdp(l, r-1);
    }
}
int rec(int l, int r)
{
    if(l==r)
    {
        moves[l][r] = l;
        return arr[l];
    }
    if(done[l][r]) return dp[l][r];
    
    int ans = INT_MIN;
    if(arr[l]-rec(l+1, r)>arr[r]-rec(l, r-1))
    {
        ans = arr[l]-rec(l+1, r);
        moves[l][r] = l;
    }
    else
    {
        ans = arr[r]-rec(l, r-1);
        moves[l][r] = r;
    }
    
    done[l][r]=1;
    return dp[l][r] = ans;
}
int main()
{
    int n;
    cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    memset(done, 0, sizeof(done));
    memset(moves, 0, sizeof(moves));
    cout<<rec(0,n-1)<<endl;
    printdp(0,n-1);
    return 0;
}