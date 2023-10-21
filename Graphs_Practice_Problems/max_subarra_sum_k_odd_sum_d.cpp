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
    int l = 0;
    int lid, rid;
    int oddcount = 0;

    for (int i = 0; i < n; i++)
    {
        if(sum + a[i]<=D)
        {
            if(a[i]%2==1)
            {
                if(oddcount+1<=k)
                {
                    sum+=a[i];
                    rid = r;
                    oddcount++;
                }
            }
            if(a[i]%2==0)
            {
                if(oddcount<=k)
                {
                    sum+=a[i];
                    rid = r;
                }
            }
        }
        else
        {
            if(sum>ans)
            {
                ans=sum;
                lid = l;
            }
            while(oddcount==k)
            {
                sum-=a[l];
                l++;
                if(a[l]%2==1) oddcount--;
            }
            sum+=a[i];
            if(a[i]%2==1) oddcount++;
            rid=i;
        }
    }
    if(sum>ans)
    {
        ans=sum;
        lid = l;
    }
    for (int i = lid; i <= rid; i++)
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
