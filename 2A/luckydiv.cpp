// Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers 
// whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Petya calls a number almost lucky if it could be evenly divided by some lucky number. 
// Help him find out if the given number n is almost lucky.
#include<bits/stdc++.h>
using namespace std;
int lucky(int n)
{
    int ch=1;
    while(n>0)
    {
        if(!(n%10==4 || n%10==7))
        {
            ch=0;
            break;
        }
        n=n/10;
    }
    return ch;
}
int main()
{
    int ch,n;
    cin>>n;
    ch=0;
    if(lucky(n)==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=4;i<=n/2;i++)
    {
        if(lucky(i)==1 && n%i==0)
        {
            ch=1;
            break;
        }
    }
    if(ch==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}