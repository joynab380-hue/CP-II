#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int, int> rating_index;

    for (int i = 0; i < n; i++) {
        if (rating_index.find(a[i]) == rating_index.end())
            rating_index[a[i]] = i + 1;
    }

    if (rating_index.size() < k) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        int count = 0;
        for (auto &p : rating_index) {
            cout << p.second << " ";
            count++;
            if (count == k) break;
        }
        cout << endl;
    }

    return 0;
}
