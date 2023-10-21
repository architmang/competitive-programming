#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //similar to palindrome check
    int dp1[1010][1010];
    int dp2[1010];
    int rec1(int l, int r, string& s)
    {
        if(l>r) return 0;
        if(l==r && s[l]=='1') return 1;
        if(l==r && s[l]=='0') return 0;
        if(s[l]=='0') return dp1[l][r] = 0;
        if(dp1[l][r]!=-1) return dp1[l][r];
        long long int val=0;
        long long int cnt=1;
        for(int i=r;i>=l;i--)
        {
            if(s[i]=='1') val+=cnt;
            cnt*=2;
        }
        while(val>1)
        {
            if(val%5!=0) return dp1[l][r] = 0;
            val = val/5;
        }
        return dp1[l][r]=(val==1)?1:0;
    }
    // min no of breaks
    int rec2(int i, string &s)
    {
        if(i==-1) return 0;
        if(dp2[i]!=-1) return dp2[i];
        int ans = INT_MAX;
        for(int j=0;j<i;j++)
        {
            if(rec1(j+1,i, s) && rec2(j, s)+1<ans)
            {
                ans = rec2(j, s)+1;
            }
        }
        if(ans!=INT_MAX) return dp2[i]=ans;
        else return -1;
    }
    int minimumBeautifulSubstrings(string s) {
        int n=s.size();
        memset(dp1, -1, sizeof(dp1));
        memset(dp2, -1, sizeof(dp2));
        dp2[0]=0;
        if(n==1 && s[0]=='0') return -1;
        if(n==1 && s[0]=='1') return 1;
        return 1+rec2(n-1, s);
    }
};

int main()
{
    Solution();
    return 0;
}