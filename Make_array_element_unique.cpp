class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
         long long ans=0;
         long long diff=0;
        sort(arr.begin(),arr.end());
        for(int i=1;i<N;i++){
            if(arr[i]<=arr[i-1]){
                diff=arr[i-1]+1-arr[i];
                ans+=diff;
                arr[i]=arr[i-1]+1;
            }
        }
        return ans;
    }
};
