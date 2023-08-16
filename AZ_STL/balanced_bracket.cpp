#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int depth=0;
    int isBal=1;
    for(auto v:s) //lambda iterator
    {
        // will throw error if we use double quotes: https://stackoverflow.com/questions/14544043/operand-types-are-incompatible-char-and-const-char
        if(v=='(')
            depth+=1;
        else
            depth-=1;
        if(depth<0)
        {
            isBal=0;
            break;
        }
    }
    if(isBal==1 && depth==0)
        cout<<"Balanced\n";
    else
        cout<<"Not Balanced\n";
}
int main()
{
    solve();
}