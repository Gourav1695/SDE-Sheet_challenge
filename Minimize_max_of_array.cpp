class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long sum=0; long result=0;
        // vector<int>vec;
        for(int i=0; i<nums.size();i++){
            sum=sum+nums[i];
            result= max(result, (sum+i)/(i+1));
        }
        return result;
    }
};

tc -> O(N)
sc -> O(1)
