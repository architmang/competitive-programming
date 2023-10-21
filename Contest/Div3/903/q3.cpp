#include <bits/stdc++.h>
using namespace std;

vector<vector<char> > g;

int maxi;
int rec(vector<vector<char> > v, int n)
{
    if(n<=1) return 0;
    if(n==2)
    {
        maxi = max( max(v[0][0]-'a', v[0][1]-'a'), max(v[1][0]-'a', v[1][1]-'a') );
        return maxi*4 - (v[0][0]-'a') - (v[0][1]-'a') - (v[1][0]-'a') - (v[1][1]-'a');
    }
    // if(mp.find(v)!=mp.end()) return mp[v];
    int ans=0;
    for(int i=0; i<n-1; i++)
    {
        g.clear();
        g.assign(2, vector<char>(2, 'a'));
        g[0][0] = v[0][i];
        g[0][1] = v[i][n-1];
        g[1][0] = v[n-1][n-1-i];
        g[1][1] = v[n-1-i][0];
        ans+= rec(g, 2);
    }
    g.clear();
    g.assign(n-2, vector<char>(n-2, 'a'));
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++)
        {
            g[i-1][j-1] = v[i][j];
        }
    }
    ans+=rec(g, n-2);
    return ans;
}

void solve() {
    int n;
    cin>>n;
    vector<string> s(n);
    vector<vector<char> > v(n, vector<char>(n, 'a'));
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            v[i][j]=s[i][j];
        }
    }
    cout<<rec(v, n)<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
