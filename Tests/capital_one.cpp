#include <bits/stdc++.h>
using namespace std;

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

bool isPalindrome(vector<int>& v, int a, int b) {
    if (a >= b) return true;
    return (v[a] == v[b]) && isPalindrome(v, a + 1, b - 1);
}

void solve() {
    int n;
    cin >> n;
    vector<int> binaryRep;
    
    while (n != 0) {
        binaryRep.push_back(n % 2);
        n = n / 2;
    }
    
    reverse(binaryRep.begin(), binaryRep.end());
    
    int inc = 0, dec = 0;
    int len = binaryRep.size();
    
    for (int i = 0; i < len / 2; i++) {
        if (binaryRep[i] != binaryRep[len - 1 - i]) {
            inc += abs(binaryRep[i] - binaryRep[len - 1 - i]);
            dec += abs(binaryRep[i] - binaryRep[len - 1 - i]);
        }
    }
    
    cout << min(inc, dec) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
