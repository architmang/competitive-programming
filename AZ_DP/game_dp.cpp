// form 4 std problem
#include<bits/stdc++.h>
using namespace std;
int dp[1010];
vector<int> moves;
int rec(int n)
{
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans = 0;
    for(auto v:moves)
    {
        if(n-v>=0 && rec(n-v)==0)
        {
            ans = 1;
            break;
        } 
    }
    return dp[n] = ans;
}
int main()
{
    int n;
    cin>>n;
    moves.push_back(1);
    moves.push_back(2);
    moves.push_back(3);
    memset(dp, -1, sizeof(dp));
    cout<<rec(n)<<endl;
    return 0;
}