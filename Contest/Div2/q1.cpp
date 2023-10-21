#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<pair<int, int>> operations;

        // Start with the first operation, which will cover the entire array.
        int l = 1, r = n;

        for (int i = 1; i <= 7 && l < r; i++) {
            // Perform an operation on the first 7 elements.
            operations.push_back({l, l + 6});
            
            // Calculate the XOR of the selected range.
            int s = a[l - 1];
            for (int j = l; j <= l + 6; j++) {
                s ^= a[j - 1];
            }

            // Replace the selected range with the XOR result.
            for (int j = l; j <= l + 6; j++) {
                a[j - 1] = s;
            }

            // Move the left pointer to the right.
            l += 7;
        }

        // Handle the remaining elements if any.
        while (l < r) {
            // Perform an operation on the remaining elements.
            operations.push_back({l, r});
            
            // Calculate the XOR of the remaining range.
            int s = a[l - 1];
            for (int j = l; j <= r; j++) {
                s ^= a[j - 1];
            }

            // Replace the remaining range with the XOR result.
            for (int j = l; j <= r; j++) {
                a[j - 1] = s;
            }

            // Move the left pointer to the right.
            l++;
        }

        // Output the number of operations and the operations themselves.
        cout << operations.size() << endl;
        for (auto op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}
