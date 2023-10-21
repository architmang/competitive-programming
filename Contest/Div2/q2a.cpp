#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> p(2, 0);
    vector<int> a(2, 0);
    vector<int> b(2, 0);

    if(n%3==0 && n>=12)
    {
        cout<<"YES"<<endl;
        cout<<1<<4<<n-5<<endl;
    }
    else if(n%3==1 && n>=7)
    {
        cout<<"YES"<<endl;
        cout<<1<<2<<n-3<<endl;
    }
    else if(n%3==2 && n>=8)
    {
        cout<<"YES"<<endl;
        cout<<2<<5<<n-7<<endl;
    }
    else cout<<"NO"<<endl;
    return;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
