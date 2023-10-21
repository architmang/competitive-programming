#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, x;
    cin>>n>>x;
    vector<int> a(n, 0);
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    int high=INT_MIN, low=INT_MAX, total=0;
    for(int i=0;i<n-1;i++)
    {
        total+=a[i];
        if(a[i]<low)
        {
            low=a[i];
        }
        if(a[i]>high)
        {
            high=a[i];
        }
    }
    if(total-high>=x) return 0;
    else if(total-high<=x && total-low>=x && x+high+low-total<=high && x+high+low-total>=low) return x+high+low-total;
    else if(total-low>=x) return high;  
    else return -1;
}

int main() {
    cout<<solve();
    return 0;
}
