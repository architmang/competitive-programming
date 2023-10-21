#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin>>n;
    if(n==0)
    {
        cout<<"Yes"<<endl;
        return;
    }
    vector<int> dig;
    dig.clear();
    while(n!=0)
    {
        d = n%10;
        n=n/10;
        dig.push_back(d);
    }
    int c=1;
    for(int i=1;i<dig.size();i++)
    {
        if(dig[i]<=dig[i-1]) c=0;
    }
    if(c==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return;
}

int main() {
    solve();
    return 0;
}
