class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        int ans=1;
        sort(start,start+N);
        sort(end,end+N);
        for(int i=1,j=0;i<N;i++){
            if(start[i]<end[j]){
                ans++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};
