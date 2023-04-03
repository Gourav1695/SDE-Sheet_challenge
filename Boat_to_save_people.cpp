#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &arr, int limit)
    {
        // int n= arr.size();
        sort(arr.begin(), arr.end());
        int count = 0;
        int i = 0;
        int j = arr.size() - 1;
        while (i <= j)
        {
            if (arr[i] + arr[j] <= limit)
            {
                count++;
                j--;
                i++;
            }
            else
            {
                count++;
                j--;
            }
        }

        return count;
    }
};
int main()
{
    Solution obj;
    vector<int> vec = {5, 1, 4, 2};
    int target = 6;
    int ans = obj.numRescueBoats(vec, target);
    cout << ans << endl;
    return 0;
}
