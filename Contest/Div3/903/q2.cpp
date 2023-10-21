#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    multiset<int, greater<int> > s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    if(a==b && b==c){
        cout<<"YES"<<endl;
        return;
    }
    int k = 3;
    while(k--)
    {
        // cout<<"current set ";
        // for(auto v:s) cout<<v<<" ";
        int min = *s.rbegin();
        int max = *s.begin();
        if(max==min)
        {
            cout<<"YES"<<endl;
            return;
        }
        s.erase(s.find(max));
        s.insert(max-min);
        s.insert(min);
    }
    int min = *s.rbegin();
    int max = *s.begin();
    if(max==min)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
