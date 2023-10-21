#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int k;
    int n,m;
    cin>>n>>m>>k;
    
    vector<int> a, b;
    int suma=0, sumb=0;
    a.resize(n);
    b.resize(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    priority_queue<int> mina, maxa, minb, maxb;
    for(int i=0;i<n;i++) 
    {
        suma+=a[i];
        maxa.push(a[i]);
        mina.push(-a[i]);
    }

    for(int i=0;i<m;i++) 
    {
        sumb+=b[i];
        maxb.push(b[i]);
        minb.push(-b[i]);
    }
    
    for(int i=0;i<k;i++)
    {
        if(i%2==0)
        {
            //jelly
            int min = -mina.top();
            int max = maxb.top();
            if(max<min) continue;

            suma = suma - min + max;
            sumb = sumb - max + min;
            
            mina.pop();
            maxb.pop();

            maxa.push(max);
            maxb.push(min);
            mina.push(-max);
            minb.push(-min);
        }
        else
        {
            //gelly
            int min = -minb.top();
            int max = maxa.top();
            if(max<min) continue;

            sumb = sumb - min + max;
            suma = suma - max + min;

            minb.pop();
            maxa.pop();

            maxb.push(max);
            maxa.push(min);
            minb.push(-max);
            mina.push(-min);
        }
    }
    cout<<suma<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}