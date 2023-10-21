// form 4 std problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> x;
    // x.resize(n);

    // print all subsets .... if  digit 1 logic

    // for(int i=0;i<n;i++)
    // {
    //     cin>>x[i];
    // }
    // for(int i=0;i<(1<<5);i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         if(i&(1<<j)) cout<<x[j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // generate all permutations ... using next_permutation 

    // iota(x.begin(), x.end(), 1);
    // x

    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    x.push_back(3);

    do{
        for(int j=0;j<n-1;j++)
        {
            cout<<x[j]<<" ";
        }
        cout<<endl;
    }while(next_permutation(x.begin(), x.end()));

    return 0;
}