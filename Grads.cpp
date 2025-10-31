#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Friend
{
    string name;
    int A, M, S, E;
};
bool compare(Friend f1, Friend f2)
{
    int total1 = f1.A + f1.M + f1.S + f1.E;
    int total2 = f2.A + f2.M + f2.S + f2.E;

    if (total1 != total2)
        return total1 > total2;
    return f1.name < f2.name;
}

int main()
{
    int N;
    cin >> N;
    vector<Friend> friends(N);

    for (int i = 0; i < N; i++)
    {
        cin >> friends[i].name >> friends[i].A >> friends[i].M >> friends[i].S >> friends[i].E;
    }

    sort(friends.begin(), friends.end(), compare);

    for (int i = 0; i < N; i++)
    {
        cout << friends[i].name << " "
             << friends[i].A << " "
             << friends[i].M << " "
             << friends[i].S << " "
             << friends[i].E << endl;
    }
    return 0;
}
