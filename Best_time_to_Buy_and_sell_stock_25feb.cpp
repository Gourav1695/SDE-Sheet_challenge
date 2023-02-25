class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int minPrice=INT_MAX;
        for (int i=0;i<prices.size();i++)
        {
            minPrice=min(minPrice,prices[i]);
            max_profit=max(max_profit,prices[i]-minPrice);
            

        
        }
        return max_profit;
        
    }
};
