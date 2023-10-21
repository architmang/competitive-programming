#include<bits/stdc++.h>
using namespace std;

int dp1[1010][1010]; 
int dp2[1010]; 
int back[1010]; 

string s;

int rec1(int l, int r)
{
    //palindrome
    if(l>=r) return 1;
    if(dp1[l][r]!=-1) return dp1[l][r];
    int ans = 0;
    if(rec1(l+1, r-1) && s[l]==s[r]) ans=1;
    return dp1[l][r] = ans;
}

int rec2(int i)
{
    //minm breaks
    if(i==0) return -1;
    if(dp2[i]!=-1) return dp2[i];
    int ans = INT_MAX;
    for(int j=0;j<i;j++)
    {
        if(rec1(j+1, i) && rec2(j)+1<ans)
        {
            back[i]=j;
            ans = rec2(j)+1;
        }
    }
    return dp2[i] = ans;
}

int clb[1010];
void generate(int i)
{
    if(i<=0) return;
    int b = back[i];
    if(b!=0)
    {
        clb[i]++;
        generate(b);
    }
}

int main()
{
    int n;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp1[i][j]=-1;
        }   
    }
    for(int i=0;i<n;i++)
    {
        clb[i]=0;
        dp2[i]=-1;
        back[i]=-1;   
    }
    cout<<rec2(n-1)<<endl;
    generate(n-1);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
        for(int x=0;x<clb[i];x++)
        {
            cout<<"|";
        }
    }
    return 0;
}