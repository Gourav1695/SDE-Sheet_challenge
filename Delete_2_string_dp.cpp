class Solution {
public:
    int solve(int i,int j,string word1, string word2,vector<vector<int>> &dp){
        
        if(i==0||j==0){
            dp[i][j]=0;
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(word1[i-1]==word2[j-1]){
            dp[i][j]=1+solve(i-1,j-1,word1,word2,dp);
        }
        else{
            dp[i][j]=max(solve(i-1,j,word1,word2,dp),solve(i,j-1,word1,word2,dp));
        }
        
        return dp[i][j];
        
    }
    int minDistance(string word1, string word2) {
        
        int n=word1.size();
        int m=word2.size();
        
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
        solve(n,m,word1,word2,dp);
        
        return n-dp[n][m]+m-dp[n][m];
        
    }
};
