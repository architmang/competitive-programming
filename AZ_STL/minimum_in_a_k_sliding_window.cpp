#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,i;
    cin>>n>>k;
    int arr[100];
    cout<<"arr";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    multiset <int> mt;
    for(i=0;i<n;i++)
    {
        mt.insert(arr[i]);
        if(i-k>=0)
        {
            mt.erase(mt.find(arr[i-k]));
        }
        if(i>=k-1)
            cout<<*mt.begin()<<"\n";
    }
}
int main()
{
    solve();
}