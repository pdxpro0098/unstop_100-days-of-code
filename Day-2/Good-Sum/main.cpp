#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int good_sum(int N, vector<int> &A)
{
    stack<int> stk;

    for (int val : A)
    {
        if (val > 0)
        {
            stk.push(val);
        }
        else
        {
            int sum = 0;
            while (!stk.empty() && sum < abs(val))
            {
                sum += stk.top();
                stk.pop();
            }
            stk.push(abs(val));
        }
    }

    int s = 0;
    while (!stk.empty())
    {

        s += stk.top();
        stk.pop();
    }

    return s;
}