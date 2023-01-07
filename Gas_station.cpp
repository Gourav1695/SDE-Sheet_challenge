#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        if (accumulate(gas.begin(), gas.end(), 0)<accumulate(cost.begin(),cost.end(),0))
        {
            cout << -1 << endl;
            return -1;
        }
        int ans = 0;
        int n = gas.size();
        int remaining_fuel = 0;
        for (int i = 0; i < n; i++)
        {
            remaining_fuel+=gas[i]-cost[i];
            if (remaining_fuel < 0)
            {
                ans = i + 1;
                remaining_fuel = 0;
            }
        }
        cout << ans << endl;
        return ans;
    }
};

int main()
{
    Solution solve;
    vector<int> arr1 = {2, 3, 4};
    vector<int> arr2 = {3, 4, 3};

    solve.canCompleteCircuit(arr1, arr2);
    return 0;
}
