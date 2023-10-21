#include <bits/stdc++.h>
using namespace std;

int mat[10][10];

void solve() {
    int k, d;
    cin>>k;
    if(k<=9)
    {
        cout<<k<<endl;
        return;
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(j==0) mat[i][j]=1;
            else
            {
                if(i<j) mat[i][j]=1;
            }
        }
    }
    vector<int> dig;
    return;
}

int main() {
    solve();
    return 0;
}
