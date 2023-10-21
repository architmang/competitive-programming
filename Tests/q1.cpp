#include <bits/stdc++.h>
using namespace std;

bool comp()
{
    //
}

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> fmap;
    for(int i=0;i<n;i++)
    {
        cin>>fmap[i];
    }
    priority_queue<int, unordered_map<int, int>, comp> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(fmap[i]);
    }

}
