#include <bits/stdc++.h>
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

int main()
{
    int N;
    cin >> N;

    vector<string> arr(N);

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    cout << findKthDistinct(arr, k);

    return 0;
}