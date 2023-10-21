#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    string s, mega, cur;
    int pos;
    cin>>s>>pos;
    int n =s.size();
    cur = s;
    mega = s;
    while(n--)
    {
        int p = 0;
        for(int i=0;i<cur.size();i++)
        {
            if(cur[i]-'a'>cur[p]-'a') p=i;
        }
        string ne;
        ne = cur.substr(0, p) + cur.substr(p+1, n-p+1);
        cur = ne;
        mega = mega + cur;
    }
    cout<<mega[pos-1];
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
