class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cn=0;
        for(auto it : nums){
           if (it==0){
               return 0;
           }
           if(it<0){
               cn++;
           }

        }
       if(cn%2==0){
           return 1;
       }
       else{
           return -1;
       }
    }
};
