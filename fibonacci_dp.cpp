//  class Solution {
// public:
//     int fib(int n) {
//         if(n==0) return 0;
//         if(n==1 ) return 1;
         
//         return fib(n-1)+fib(n-2);//neive approach
//         // TC= O(2^n)
//         //SC= O(n)
//     }
// };

class Solution {
    public :
   
//         int memo[31] = {0};
// int fib(int n) {
// 	if(n <= 1)
// 		return n;
// 	if(memo[n])
// 		return memo[n];
// 	return memo[n] = fib(n - 1) + fib(n - 2);
//     }
// };
    int dp[31] = {0};
int fib(int n) {
	if(n <= 1)
		return n;
	dp[0] = 0, dp[1] = 1;
	for(int i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	return dp[n];
}
};
    
