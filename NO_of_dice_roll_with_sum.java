class Solution {
    int mod = 1_000_000_007;
    public int numRollsToTarget(int d, int f, int target) {
        long[] dp = new long[target + 1];
        dp[0] = 1;
        for (int i = 1; i <= d; i++) {
            for (int j = target; j >= 0; j--) {
                dp[j] = 0;
                for (int k = 1; k <= f; k++) {
                    if (j >= k) {
                        dp[j] = (dp[j] + dp[j - k]) % mod;
                    } else {
                        break;
                    }
                }
            }
        }
        return (int)dp[target];
    }
}
