#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b,n;
    cin>>a>>b>>n;
    vector<int> x;
    x.resize(n);
    for(int i=0;i<n;i++) cin>>x[i];
    sort(x.begin(), x.end());
    // for(int i=0;i<n;i++) cout<<x[i];
    long long int time=b-1;
    for(int i=0;i<n;i++)
    {
        if (x[i]< a)
        {
            time +=x[i];
        }
        else time+= a;
    }
    cout<<time<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}