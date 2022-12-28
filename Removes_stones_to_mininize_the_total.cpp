class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        // make priority_queue 
        // pop the top and divide by 2 and  make the floor and push it once again
        // lastly sum the elements in the pq
        priority_queue<int>pq;
        for(auto x:piles)
        {
            pq.push(x);
        }
        while(k--)
        {
            int t=pq.top();
            pq.pop();
            pq.push(t-floor(t/2));
        }
        int sum =0;
        while(!pq.empty())
        {
            sum = sum + pq.top();
            pq.pop();
        }
        return sum;
    }
};
