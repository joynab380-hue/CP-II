#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[100000], t[100000];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    int base = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 1) base += a[i];
    }
    int current = 0;
    for (int i = 0; i < k; i++)
    {
        if (t[i] == 0) current += a[i];
    }

    int maxBonus = current;

    for (int i = k; i < n; i++)
    {
        if (t[i] == 0) current += a[i];
        if (t[i - k] == 0) current -= a[i - k];
        if (current > maxBonus) maxBonus = current;
    }
    cout << base + maxBonus;
    return 0;
}
