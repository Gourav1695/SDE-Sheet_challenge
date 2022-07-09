class Solution {
public:
    int climbStairs(int n) {
        int a=1, b=1;
        int temp;
        while(--n){
        temp = a;
        a = b;
        b = temp + b;
        }
        return b;
    }
        
};
