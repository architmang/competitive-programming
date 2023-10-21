#include<bits/stdc++.h>
using namespace std;
int main(){
    int w, ch=0;
    cin>>w;
    for(int i=2;i<=w/2;i++)
    {
        if(i%2==0 && (w-i)%2==0)
        {
            ch=1;
            break;
        }
    }
    if(ch==1) cout<<"YES"<<endl;
    if(ch==0) cout<<"NO"<<endl;
    return 0;
}