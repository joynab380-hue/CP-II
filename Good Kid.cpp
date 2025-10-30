#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        long long maxProduct = 0;

        for (int i = 0; i < n; ++i) {
            vector<int> b = a;
            b[i]++; // add 1 to the i-th digit

            long long product = 1;
            for (int x : b) product *= x;

            maxProduct = max(maxProduct, product);
        }

        cout << maxProduct << "\n";
    }

    return 0;
}

