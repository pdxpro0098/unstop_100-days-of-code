#include <iostream>
#include <vector>
#include <map>

using namespace std;

void find_youngest_member(int n, int m, vector<pair<int, int>> &gifts)
{
    if (m == 0){
        cout << n;
        return;
    }

    map<int, int> count;

    for (auto p : gifts)
    {
        count[p.second]++;
    }

    for (auto p : count)
    {
        if (p.second == n - 1)
        {
            cout << p.first;
            return;
        }
    }

    cout << -1;
}