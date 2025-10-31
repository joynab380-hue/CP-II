#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Friend
{
    string name;
    int A, M, S, E;
    int total;
};
bool compare(Friend f1, Friend f2)
{
    if (f1.total != f2.total)
        return f1.total > f2.total;
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
        friends[i].total = friends[i].A + friends[i].M + friends[i].S + friends[i].E;
    }

    sort(friends.begin(), friends.end(), compare);

    for (int i = 0; i < N; i++)
    {
        cout << friends[i].name << " "
             << friends[i].total << " "<< friends[i].A << " "
             << friends[i].M << " "<< friends[i].S << " "
             << friends[i].E << endl;
    }
    return 0;
}
