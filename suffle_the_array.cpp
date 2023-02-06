class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j=n;
        int mid=(2*n)/2;
        vector<int>ans;
        for(int i=0;i<mid;i++)
        {
           
           ans.push_back(nums[i]);
           ans.push_back(nums[j]);
           j++;
        }
        return ans;
    }
};
