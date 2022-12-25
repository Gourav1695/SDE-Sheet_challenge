class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());//First sorting the nums vector O(nlogn) , where n is no. on element in nums array
        vector<int>prefix(nums.size(),0);//creating the prefix vector to store the prefix sum in order of 1 time
        prefix[0]=nums[0];
        for(int i=1; i<nums.size();++i)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        vector<int >ans;
        for(int i=0 ;i<queries.size();++i)//using binary search to find the required element in the prefix sum array using upper_bound function  in O(logn)
        {
            int query= queries[i];
            ans.push_back(upper_bound(prefix.begin(),prefix.end(),query)-prefix.begin());
        }
        return ans;
        
    }
};
