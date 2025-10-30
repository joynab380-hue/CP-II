#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> freq;
    for (char c : s)
        freq[c]++;

    for (char c = 'A'; c <= 'Z'; c++)
    {
        if (freq[c] > 0)
            cout << c << " " << freq[c] << endl;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (freq[c] > 0)
            cout << c << " " << freq[c] << endl;
    }
    return 0;
}
