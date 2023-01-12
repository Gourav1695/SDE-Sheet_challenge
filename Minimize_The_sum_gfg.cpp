
class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int>pq;
        for(int i=0;i<N;i++){
            pq.push(-1*arr[i]);
        }
        long long ans=0;
       while(pq.size()>1){
        int a=-1*pq.top();
        pq.pop();
        int b=-1*pq.top();
        pq.pop();
        long long sum=(a+b);
        ans+=sum;
        pq.push(-1*sum);
        }
          return ans;
    }
  
};
