class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        if(num<10){
            ans= num;
        }
        else{
            if(num%9==0){
                ans=9;
            }
            else{
            ans= num%9;
            }
       }
       return ans;
    }
};
