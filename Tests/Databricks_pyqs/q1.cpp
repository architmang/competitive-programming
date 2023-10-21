#include <bits/stdc++.h>
using namespace std;

void solve() {
    stack<int> s;
    int n;
    cin>>n;
    vector<int> choc;
    for(int i=0; i<n; i++) cin>>choc[i];
    for(int i=0; i<n; i++)
    {
        if(choc[i]==0)
        {    
            int size = s.top();
            s.pop();
        }
        else{
            s.push(choc[i]);
        }
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
