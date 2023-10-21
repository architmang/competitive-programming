#include <bits/stdc++.h>
using namespace std;

int arr[10010];
int t[40040];

void build(int index, int l, int r)
{
    if(l==r){
        t[index] = arr[l];
        return;
    }
    int mid = (l+r)/2;
    build(2*index, l, mid);
    build(2*index+1, mid+1, r);
    t[index] = t[2*index] + t[2*index+1];
}

void update(int index, int l, int r, int pos, int val)
{
    if(pos<l || pos>r) return;
    if(l==r){
        t[index] = val;
        arr[l] = val;
        return;
    }
    int mid = (l+r)/2;
    update(2*index, l, mid, pos, val);
    update(2*index+1, mid+1, r, pos, val);
    t[index] = t[2*index] + t[2*index+1];
}

int query(int index, int l, int r, int lq, int rq)
{
    // l r lq rq or lq rq l r
    if(lq>r || rq<l) return 0;
    // lq l r rq
    if(lq<=l && rq>=r) return t[index];
    // l lq rq r
    int mid = (l+r)/2;
    return query(2*index, l, mid, lq, rq) + query(2*index+1, mid+1, r, lq, rq);
}

void solve() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    build(1, 0, n-1);
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        char ch;
        cin>>ch;
        if(ch=='1')
        {
            int pos, val;
            cin>>pos>>val;
            update(1, 0, n-1, pos, val);
        }
        if(ch=='2')
        {
            int l, r;
            cin>>l>>r;
            query(1, 0, n-1, l, r);
        }
    }
}

int main() {
    solve();
    return 0;
}
