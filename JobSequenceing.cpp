class Solution 
{
    public:
    static bool comparison(Job a, Job b)
    {
        return (a.profit >b.profit);
        
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        sort (arr, arr+n, comparison);
        int maxm=arr[0].dead;
        for (int i=1;i<n;i++){
             maxm= max(maxm,arr[i].dead);
    } 
        
    
    int slot [maxm+1];
    for (int i=0; i<= maxm;i++)
    {
        slot[i]=-1;
        
    }
    int countJobs=0, jobProfit=0;
    for (int i=0;i<n;i++)
    {
        for (int j=arr[i].dead;j>0;j--)
        {
            if (slot[j]==-1)
            {
                slot[j]=i;
                countJobs++;
                jobProfit+= arr[i].profit;
                break;
            }
        }
    }
   
    return {countJobs,jobProfit};
    }
};
