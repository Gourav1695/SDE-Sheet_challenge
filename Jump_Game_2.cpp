class Solution {
public:
    int jump(vector<int>& nums) {
       int  currentEnd=0,currentFar=0;
       int n=nums.size();
       int ans=0;
       for(int i=0; i<n-1; i++){
           currentFar=max(currentFar, i+nums[i]);
           if(i==currentEnd){
               ans++;
               currentEnd=currentFar;
           }
       } 
       return ans;
    }
};
