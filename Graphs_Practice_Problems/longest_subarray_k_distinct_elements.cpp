#include <bits/stdc++.h>
using namespace std;

// sliding window 

void solve() {
    int n, k;
    cin >> n >> k; 
    vector<int> a;
    unordered_map<int, int> fmap;
    a.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }    

    // longest subarray k distinct
    int ans = 0;
    int l = 0;
    int id;

    for (int i = 0; i < n; i++)
    {
        if(fmap.count(a[i]))
        {
            fmap[a[i]]++;
        }
        else
        {
            if(fmap.size()==k)
            {
                if(i-l>ans)
                {
                    ans = i-l;
                    id = l;
                }
                while(fmap.size()==k)
                {
                    fmap[a[l]]--;
                    if(fmap[a[l]]==0) fmap.erase(a[l]);
                    l++;
                }
            }
            fmap[a[i]]++;
        }
    }
    if(n-l>ans)
    {
        ans = n-l;
        id = l;
    }
    for(int i=id; i<id+ans;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
