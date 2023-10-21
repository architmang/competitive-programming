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
    int size = 0;
    int l = 0;
    int id;

    vector<int> start;

    for (int i = 0; i < n; i++)
    {
        if(size<k)
        {
            size++;
        }
        else
        {
            if(size==k)
            {
                id = l;
                start.push_back(id);
            }
            while(size==k)
            {
                l++;
                size--;
            }
            size++;
            id = l;
        }
    }
    id = l;
    start.push_back(id);
    for (int i = 0; i < start.size(); i++)
    {
        cout<<endl;
        for (int j = start[i]; j < start[i] + k; j++)
        {
            cout<<a[j]<<" ";
        }
    }
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
