class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>res;
        
        vector<int>ans1;
        vector<int>ans2;
        vector<int>ans3;
        vector<int>ans4;
        set<int>st1;
        set<int>st2;
        for(auto it:nums1){
          
            if(find(nums2.begin(), nums2.end(), it) == nums2.end()){
                cout<<it<<"yo ";
                ans1.push_back(it);
            }
        }
        for(auto it1:nums2){
          
            if(find(nums1.begin(), nums1.end(), it1) == nums1.end()){

                ans2.push_back(it1);
                cout<<it1<<" ";
            }
        }
        for(auto itr: ans1){
            st1.insert(itr);
        }
         for(auto itr1: ans2){
            st2.insert(itr1);
        }
        for(auto it3:st1){
            ans3.push_back(it3);
        }
        for(auto it4:st2){
            ans4.push_back(it4);
        }


        res.push_back(ans3);
        res.push_back(ans4);
          return res;
    }
  
};
