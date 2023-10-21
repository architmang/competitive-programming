#include<bits/stdc++.h>
using namespace std;

string a, b;
int dp[1010][1010];
char prevs[1010][1010];

void printlcs(int i, int j)
{
    if(i>=0 && j>=0)
    {
        if(a[i]==b[j])
        {
            printlcs(i-1, j-1);
            cout<<a[i];
        }
        else
        {
            if(prevs[i][j]==a[i]) printlcs(i-1, j);
            else printlcs(i, j-1);
        }
    }
}

int lcs(int i, int j)
{
    if(i>=a.size() || j>=b.size()) return 0; //base
    //cache
    if(dp[i][j]!=-1) return dp[i][j];

    int ans=0;
    char prev_elem = '.';
    
    if(lcs(i, j+1)>lcs(i+1, j))
    {
        ans = lcs(i, j+1);
        prev_elem=prevs[i][j+1];
    }
    else
    {
        ans = lcs(i+1, j);
        prev_elem=prevs[i+1][j];
    }
    if(a[i]==b[j])
    {
        ans = 1+ lcs(i+1, j+1);
        prev_elem=a[i];
    }

    prevs[i][j]=prev_elem;
    return dp[i][j]=ans;
}

int main()
{
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            dp[i][j]=-1;
            prevs[i][j]='.';
        }
    }
    cout<<lcs(0,0)<<endl;
    printlcs(a.size()-1, b.size()-1);
    return 0;
}