class Solution {
public:
    vector<int> dp;
    int sub(vector<int> &day, vector<int> &cost, int index)   
    {
        int n = day.size();
        if(index>=n)   return 0;
        
        if(dp[index])  return dp[index];      
        
        int cost_day = cost[0] + sub(day , cost , index+1);
        
        int i;
        for(i = index ; i<n and day[i]<day[index]+7 ; i++);
        int cost_week = cost[1] + sub(day, cost, i);
        
        for(i = index ; i<n and day[i]<day[index]+30 ; i++);
        int cost_month = cost[2] + sub(day, cost, i);     
        
        dp[index] = min({cost_day, cost_week , cost_month  });   // we store answer for future references 
        
        return dp[index];
    } 
    int mincostTickets(vector<int>& days, vector<int>& costs) {        
        dp.resize(367);
        return sub(days,costs,0);    
    }
};
