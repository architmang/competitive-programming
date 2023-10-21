#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, target;
    cin >> n >> k >> target;
    vector<int> arr;
    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }    

    int hi=n-1, low=0;

    while(hi-low>=k)
    {
        //
        int mid =(hi+low)/2;
        if(abs(arr[low]-target)>abs(arr[hi]-target)) low++;
        else hi--;
    }

    for (int i = low; i <= hi; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
