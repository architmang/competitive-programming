#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }    

    int hi=n-1, low=0;
    int mid, mini, next, prev;

    while(low<=hi)
    {
        if(arr[low]<=arr[hi]) mini=low;
        mid = (hi+low)/2;
        next = (mid+1)%n;
        prev = (mid-1+n)%n;
        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]) mini=mid;
        if(arr[mid]<=arr[hi]) hi = mid-1;
        if(arr[low]<=arr[mid]) low = mid+1; 
    }
    cout<<mini<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
