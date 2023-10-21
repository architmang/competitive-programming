// form 4 std problem
#include<bits/stdc++.h>
using namespace std;

int dp[1010][1010];
int back[1010][1010];

int x[1010];
int y[1010];

// store open and close brackets
int openb[1010];
int clb[1010];

void generate(int l, int r)
{
    if(l>=r) return;
    openb[l]++;
    clb[r]++;
    int mid = back[l][r];
    generate(l, mid);
    generate(mid+1, r);
}
int rec(int l, int r)
{
    if(l>r || l==r) return 0;
    if(dp[l][r]!=-1) return dp[l][r];
    int ans = INT_MAX;
    for(int mid = l; mid < r; mid++)
    {
        if(rec(l,mid)+rec(mid+1, r)+x[l]*y[mid]*y[r]<ans)
        {
            ans = rec(l,mid)+rec(mid+1, r)+x[l]*y[mid]*y[r];
            back[l][r]=mid;
        }
    }
    return dp[l][r] = ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        openb[i]=0;
        clb[i]=0;
    }
    memset(dp, -1, sizeof(dp));
    cout<<rec(0, n-1)<<endl;
    generate(0, n-1);
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<openb[i];x++)
        {
            cout<<"( ";
        }
        cout<<i+1<<" ";
        for(int x=0;x<clb[i];x++)
        {
            cout<<") ";
        }
    }
    return 0;
}