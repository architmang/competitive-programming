#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> seats(k, -1);
    vector<int> ans;
    for(int i=0; i<k ; i++) cin>>seats[i];
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0;i<n;i++)
    {
        pq.push(i+1);
    }
    for(int i=0;i<k;i++)
    {
        if(seats[i]==0)
        {
            int cur = pq.top();
            pq.pop();
            ans.push_back(cur);
        }
        else{
            pq.push(seats[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
