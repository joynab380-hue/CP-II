#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        map<char, int> freq;
        for (char c : s)
            freq[c]++;

        int singles = 0, pairs = 0;
        for (auto [ch, count] : freq)
        {
            if (count >= 2)
                pairs++;
            else
                singles++;
        }
        int k = pairs + (singles / 2);
        cout << k << endl;
    }
    return 0;
}
