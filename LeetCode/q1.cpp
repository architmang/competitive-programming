#include<bits/stdc++.h>
using namespace std;

int n;
string moves;
int dp[101][101][101];
int fun(int i, int ldist, int rdist)
{
    int ndist;
    if(i==n)
    {
        if(ldist>rdist) return ldist;
        return rdist;
    }
    
    if(dp[i][ldist][rdist]!=-1e8) return dp[i][ldist][rdist];
    
    if(moves[i]=='L') ldist=ldist+1;
    if(moves[i]=='R') rdist=rdist+1;
    if(moves[i]=='_')
    {
        ndist=max(fun(i+1, ldist+1, rdist), fun(i+1, ldist, rdist+1));
    }
    
    ndist=max(ldist,rdist);
    return dp[i][ldist][rdist]=ndist;
}
int furthestDistanceFromOrigin() {
    n=moves.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                dp[i][j][k]=-1e8;
            }
        }
    }
    return fun(0, 0, 0);
}
int main()
{
    cin>>moves;
    cout<<furthestDistanceFromOrigin()<<endl;
    return 0;
}