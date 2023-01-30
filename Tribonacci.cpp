class Solution {
public:
    int tribonacci(int n) {
        int a=0;
        int b=1,c=1,d=a+b+c;
        if(n<2){
            return n;
        }
        else{
      for(int i=2;i<n;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
      }
        }
        return c;
    }
};
