#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> time(m);
    vector<int> ans(m, -1);
    for(int i=0;i<m;i++) cin>>time[i];
    priority_queue< tuple<int,int, deque<int> >, vector< tuple<int,int, deque<int> > >, greater<int> > pq;
    int timer = 0;
    for(int i=0;i<n;i++)
    {
        pq.push({0, i+1, {}});
    }
    for(int i=0;i<m;i++)
    {
        int pers = get<0>(pq.top());
        int counter = get<1>(pq.top());
        deque<int> v = get<2>(pq.top());
        pq.pop();
        timer = max(timer, time[i]);
        timer++;
        if(pers==0)
        {
            pq.push({pers, counter, v});
            ans[i] = timer;
        }        
        else{
            v.push_back(i);
            pq.push({pers+1, counter, v});
        }
    }
    while(pq.empty()!=1)
    {
        int pers = get<0>(pq.top());
        int counter = get<1>(pq.top());
        deque<int> v = get<2>(pq.top());
        pq.pop();
        while(v.empty()!=1)
        {
            int cur  = v.front();
            v.pop_front();
            timer++;
            ans[cur] = timer;
        }
    }
    for(int i=0; i<n; i++)
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
