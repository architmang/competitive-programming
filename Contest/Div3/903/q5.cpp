#include <bits/stdc++.h>
using namespace std;

int rec(vector<vector<char> > v, int n)
{
    if(n<=1) return 0;
    if(n==2)
    {
        maxi = max( max(v[0][0]-'a', v[0][1]-'a'), max(v[1][0]-'a', v[1][1]-'a') );
        return maxi*4 - (v[0][0]-'a') - (v[0][1]-'a') - (v[1][0]-'a') - (v[1][1]-'a');
    }
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
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
