#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, d;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end());
    d="";
    for(int i=0;i<v.size();i++)
    {
        d+=char(v[i]);
        if(i!=v.size()-1)
        {
            d+='+';
        }
    }
    cout<<d<<endl;
    return 0;
}