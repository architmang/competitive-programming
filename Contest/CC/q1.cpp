#include <bits/stdc++.h>
#include<vector>
using namespace std;

void solve()
{
    int n;
    string s, t;
    cin>>n;
    cin>>s>>t;
    vector<int> st,end;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i]) arr[i]=1;
    }
    if(arr[0]==1) st.push_back(0);
    for(int i=1;i<n;i++)
    {
        if(arr[i]==1 && arr[i-1]==0)
        {
            st.push_back(i);
        }
       if(arr[i]==0 && arr[i-1]==1)
        {
            end.push_back(i-1);
        }
    }
    if(arr[n-1]==1) end.push_back(n-1);
    if(st.size()>2)
    {
        cout<<"0"<<endl;
        return;
    }
    if(st.size()==2)
    {
        cout<<"6"<<endl;
    }
    if(st.size()==1)
    {
        cout<<2*n-2<<endl;
        return;
    }
    if(st.size()==0)
    {
        cout<<((1ll*n)*(n+1))/2<<endl;
        return;
    }
    //solve
}
int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--) solve();
	return 0;
}
