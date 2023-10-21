#include <bits/stdc++.h>
using namespace std;

// sliding window 

void solve() {
    int n, k;
    cin >> n >> k; 
    vector<int> a;
    a.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }    

    // longest subarray k distinct
    int ans = INT_MIN;
    int sum= 0;
    int size=0;
    int l = 0;
    int id;

    for (int i = 0; i < n; i++)
    {
        if(size<k)
        {
            sum+=a[i];
            size++;
        }
        else
        {
            if(sum>ans)
            {
                ans=sum;
                id = l;
            }
            while(size==k)
            {
                sum-=a[l];
                l++;
                size--;
            }
            sum+=a[i];
            size++;
        }
    }
    if(sum>ans)
    {
        ans=sum;
        id = l;
    }
    for (int i = id; i < id+k; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"ans is "<<ans;
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
