#include <bits/stdc++.h>
using namespace std;

int main()
{
    void nextPermutation(vector<int> & nums)
    {
        int n = nums.size(), k, l;
        for (k = n - 2; k >= 0; k--)
        {
            if (nums[k] < nums[k + 1])
            {
                break;
            }
        }
    };

    cout
        << n << endl;
    return 0;
}