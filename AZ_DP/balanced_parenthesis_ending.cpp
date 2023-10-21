#include<bits/stdc++.h>
using namespace std;

int n;
int dp[10010];
string s;

int solve(int i)
{
    //basecase
    if(i<0) return -INFINITY;
    if(s[i]=='(') return 0;
    
    //mem
    if(dp[i]!=-1) return dp[i];
    
    //dp
    int ans=0;
    int len=solve(i-1)+2;
    if(i-(len+1)>=0 && i-(len+1)<n) 
    {
        if(i-len>=0) ans=len+solve(i-len);
        else ans=len;
    }

}
int main()
{
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
        cout<<solve(i)<<endl;
    return 0;
}