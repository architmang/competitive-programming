#include <bits/stdc++.h>
using namespace std;

// sliding window 
int min(int a, int b)
{
    if(a<b) return a;
    return b;
}

// three numbers sum closest to k
void solve() {
    int n, x;
    cin >> n >> x; 
    vector<int> a;
    unordered_map<int, int> fmap;
    a.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }    
    sort(a.begin(), a.end());
    long long ans = 3e18;

    for(int j=1;j<n-1;j++)
    {
        int i=0;
        int k=n-1;
        while(i<j && k>j)
        {
            ans = min(ans, abs(a[i]+a[j]+a[k]-x));
            if(a[i]+a[j]+a[k]<x) i++;
            else k--;
        }
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
