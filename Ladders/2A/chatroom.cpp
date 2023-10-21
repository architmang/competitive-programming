// For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello,
// and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s;
    a="hello";
    cin>>s;
    int ch,i,j;
    i=0;
    j=0;
    ch=0;
    while(1)
    {
        if(i==5)
        {
            ch=1;
            break;
        }
        if(j==s.size()) break;
        if(a[i]==s[j])
        {
            i++;
            j++;
        }
        else j++;
    }
    if(ch==1) cout<<"YES"<<endl;
    if(ch==0) cout<<"NO"<<endl;
    return 0;
}