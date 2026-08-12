#include <iostream>
#include <vector>
#include <map>

void find_youngest_member(int n, int m, std::vector<std::pair<int, int>> &gifts)
{
    if (m == 0){
        std::cout << n;
        return;
    }

    std::map<int, int> count;

    for (auto p : gifts)
    {
        count[p.second]++;
    }

    for (auto p : count)
    {
        if (p.second == n - 1)
        {
            std::cout << p.first;
            return;
        }
    }

    std::cout << -1;
}