#include<bits/stdc++.h>
using namespace std;
int sum(vector< vector<int> > v, int n, int m)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum+=v[i][j];
        }
    }
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector< vector<int> > v(n, vector<int>(m,1));
    int si,sj,ch=0; //akshat starts
    while(sum(v, n, m)!=0)
    {
        for(int i=0;i<n;i++)
        {   
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==1)
                {
                    si=i;
                    sj=j;
                }
            }
        }
        // make 0
        for(int i=0;i<n;i++)
        {   
            for(int j=0;j<m;j++)
            {
                if(i==si || j==sj)
                {
                    v[i][j]=0;
                }
            }
        }
        ch=1-ch; 
    }
    if(ch==1) cout<<"Akshat"<<endl;
    if(ch==0) cout<<"Malvika"<<endl;
}