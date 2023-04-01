class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=-1;
        int left=0;
        int right=nums.size()-1;
       int i;
        while(left<=right){
            int mid=(left+right)/2;
            if(target==nums[mid]){
               return mid;
            }
            else if(nums[mid]>target){
                right=mid-1;
                
                
            }
            else if(nums[mid]<target){
                left =mid+1;
                
            }
            // ans=mid[i]
            
        }
        return ans;
    }
};
