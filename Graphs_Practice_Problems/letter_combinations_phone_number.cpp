#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> res;
    map<int, string> mp;
    int n;
    void dfs(string digits, int index, string path)
    {
        if(path.size()==n)
        {
            res.push_back(path);
            return;
        }
        else
        {
            int num = int(digits[index])-'0';
            string str= mp[num];
            for(int i=0;i<str.size();i++)
            {
                dfs(digits, index+1, path+str[i]);
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        n=digits.size();
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        vector<string> v;
        v.clear();
        if(digits=="") return v;
        dfs(digits, 0, "");
        return res;
    }
};
int main()
{
    Solution();
    return 0;
}