#include<bits/stdc++.h>
using namespace std;
vector<int> arr, prefix;
int main()
{
    int n,k;
    cin>>n>>k;
    arr.resize(n);
    prefix.resize(n);
    prefix[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        prefix[i]=1^arr[i];
        if(i) prefix[i]+=prefix[i-1];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int len;
        // r=upper_bound(prefix.begin()+i, prefix.end(), k+prefix[i-1])-1
        auto r = upper_bound(prefix.begin()+i, prefix.end(), k+prefix[i-1]);
        len = r-(prefix.begin()+i);
        if(len>ans) ans=len;
    }
    cout<<ans<<endl;
    return 0;
}