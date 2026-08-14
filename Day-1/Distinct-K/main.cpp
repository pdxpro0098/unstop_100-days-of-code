#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string findKthDistinct(vector<string> &arr, int k)
{
    unordered_map<string, int> freq;

    for (auto str : arr)
    {
        freq[str]++;
    }

    for (auto str : arr)
    {
        if (freq[str] == 1)
        {
            if (k == 1)
                return str;
            k--;
        }
    }
    return "-1";
}
