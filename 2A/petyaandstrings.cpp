// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". 
// If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int chk=0;
    for(int i =0;i<a.size();i++)
    {
        a[i]=char(tolower(a[i]));
        b[i]=char(tolower(b[i]));
        if(a[i]<b[i])
        {
            chk=-1;
            break;
        }
        if(a[i]==b[i])
        {
            continue;
        }
        if(a[i]>b[i])
        {
            chk=1;
            break;
        }
        cout<<a[i]<<" "<<b[i]<<" chk "<<chk<<endl;
    }
    cout<<chk<<endl;
    return 0;
}