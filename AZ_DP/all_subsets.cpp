// form 4 std problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v;
    v.push_back('A');
    v.push_back('B');
    v.push_back('C');
    v.push_back('D');
    v.push_back('E');

    int k=3;
    for(int mask=0;mask<1<<k;mask++)
    {
        cout<<"subset {";
        for(int i=0;i<k;i++)
        {
            if(mask&1<<i) cout<<v[i]<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}