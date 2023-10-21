// deletes all the vowels,
// inserts a character ... before each consonant,
// replaces all uppercase consonants with corresponding lowercase ones.
// Vowels are letters .A., .O., .Y., .E., .U., .I., and the rest are consonants
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,sp;
    cin>>st;
    sp="";
    for(int i=0;i<st.size();i++)
    {
        // cout<<i<<" th iteration output string "<<sp<<endl;
        if(st[i]=='A' || st[i]=='O' ||st[i]=='Y' ||st[i]=='E' ||st[i]=='U' ||st[i]=='I' || st[i]=='a' || st[i]=='o' ||st[i]=='y' ||st[i]=='e' ||st[i]=='u' ||st[i]=='i')
        {
            continue;
        }
        else
        {
            sp = sp + '.';
            sp = sp + char(tolower(st[i]));
        }
    }
    cout<<sp<<endl;
    return 0;
}