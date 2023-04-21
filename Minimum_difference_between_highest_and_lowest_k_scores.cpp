class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
       int ans=INT_MAX;
       int i=0, j=k-1;
       while(j<nums.size()){
           ans=min(ans,(nums[j]-nums[i]));
           i++;
           j++;
       }
        return ans;
    }
};

// tc -> O(N)
//sc -> O(1)
