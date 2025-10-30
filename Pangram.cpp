#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    for (auto &c : s)
        c = tolower(c);

    set<char> letters;
    for (char c : s)
        letters.insert(c);

    if (letters.size() == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
