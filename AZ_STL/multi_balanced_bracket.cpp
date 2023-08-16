#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    map<char,int> m;
    m['(']=1;
    m['[']=2;
    m['{']=3;
    m[')']=4;
    m[']']=5;
    m['}']=6;
    int isBal=1;
    stack <int> st;
    for(auto v:s) //lambda iterator
    {
        // if open, push
        if(m[v]<=3)
            st.push(m[v]); 
        // if close, pop top
        else
        {
            if(st.empty()==1 || st.top()!=m[v]-3)
                isBal=0;
            st.pop();
        }
    }
    // stack should be empty at the end
    if(st.empty() && isBal==1)
        cout<<"Balanced\n";
    else
        cout<<"Not Balanced\n";
    // vector <int> st;
    // for(auto v:s) //lambda iterator
    // {
    //     // if open, push
    //     if(m[v]<=3)
    //         st.push_back(m[v]); 
    //     // if close, pop top
    //     else
    //     {
    //         if(st.empty()==1 || st.back()!=m[v]-3)
    //             isBal=0;
    //         st.pop_back();
    //     }
    // }
}
int main()
{
    solve();
}