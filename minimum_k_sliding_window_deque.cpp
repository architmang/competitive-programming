#include<bits/stdc++.h>
using namespace std;
struct monotone_deque{
    deque<int> dq;
    void insert(int x)
    {
        while(dq.empty()!=1 && dq.back()>x)
            dq.pop_back();
        dq.push_back(x);
    }
    void remove(int x)
    {
        if(dq.front()==x)
            dq.pop_front();
    }
    int getMin()
    {
        return dq.front();
    }
};
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
    monotone_deque mdq;
    for(i=0;i<n;i++)
    {
        mdq.insert(arr[i]);
        if(i-k>=0)
            mdq.remove(arr[i-k]);
        if(i>=k-1)
            cout<<mdq.getMin()<<"\n";
    } 
}
int main()
{
    solve();
}