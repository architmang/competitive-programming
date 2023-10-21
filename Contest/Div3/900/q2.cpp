#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,cnt=0;
    cin>>n;
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    cnt=5;
    cout<<"1 3";
    int size=2;
    while(size!=n)
    {
        while((3*cnt)%(a[size-1]+a[size-2])==0) cnt++;
        a.push_back(cnt);
        cout<<" "<<cnt;
        size++;
        cnt++;
    }
    cout<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}