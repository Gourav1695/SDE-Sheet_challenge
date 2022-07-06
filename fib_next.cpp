#include <bits/stdc++.h>
using namespace std;  
  class Solution {
    public:
  
  
  int fib(int n) 
    {
        if( n<=1) return n;
        int prev2=0, prev1=1;
        for (int i=2; i<=n; i++){
            int curr= (prev2+prev1);
            prev2= prev1;
            prev1=curr;
        }
        return prev1;
}
};
int main(){
    int t; 
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        Solution op;
        op.fib(n);
        cout<<op.fib(n)<<endl;
    }
}
