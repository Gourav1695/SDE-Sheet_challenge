class Solution {
  public:
    int solve(int N, vector<int> A) {
        // code here
        int ans=0;
        int n=A.size();
        if(A[n-1]<9){
            ans=n;
            return ans;
        }
        else if(A[n-1]==9){
            for(int i=1;i<n;i++){
                if(A[n-i]<9){
                    ans=n-i+1;
                    return ans;
                }
            }
        }
        return ans;
        
    }
};
