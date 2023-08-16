#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string arr[10010], st;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        st = arr[i];
        if(st.size()>10)
        {
            cout<<st[0]<<st.size()-2<<st[st.size()-1]<<endl;
        }
        else
        {
            cout<<st<<endl;
        }
    }
    return 0;
}