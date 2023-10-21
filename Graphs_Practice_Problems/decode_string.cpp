#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        int i=0;
        int n=s.size();
        string main, small;
        while(i<n)
        {
            if(s[i]-'0'>=1 && s[i]-'0'<=9)
            {
                int start=i;
                while(s[i]-'0'>=1 && s[i]-'0'<=9) i++;
                int rep =stoi(s.substr(start, i-start));
                i++;
                int left_brack=1;
                int right_brack=0;
                int inner_start=i;
                while(i<n)
                {
                    if(s[i]=='[') left_brack++;
                    if(s[i]==']') right_brack++;
                    if(left_brack==right_brack) break;
                    i++;
                }
                int inner_close=i;
                i++;
                small=decodeString(s.substr(inner_start, inner_close-inner_start));
                while(rep--)
                {
                    main+=small;
                }
            }
            else
            {
                main+=s[i];
                i++;
            }
        }
        return main;
    }
};
int main()
{
    Solution();
    return 0;
}