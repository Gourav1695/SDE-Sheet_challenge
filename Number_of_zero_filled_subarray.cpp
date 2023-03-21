class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long sum=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
           if(nums[i]==0 && i== (nums.size()-1))
            {
                sum=sum+count*(count+1)/2;
                count=0;
            }
             if(nums[i]!=0)
        {
                sum=sum+count*(count+1)/2;
                count=0;
            }
            

        }
        return sum;
    }
};
