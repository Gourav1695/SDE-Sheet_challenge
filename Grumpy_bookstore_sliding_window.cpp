class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        // we will use sliding window approach here

        // 1. maxUnsatCust findout
        // 2. add this to totalSat;

        int n = customers.size();
        int maxUnsatCust = 0;
        int curUnsatCust = 0;
        for(int i=0; i<minutes;i++) // for initial window // tc-> O(n)
        {
            curUnsatCust += grumpy[i]*customers[i];
        }
        maxUnsatCust=curUnsatCust;
        // sliding window approach below
        int i=0;
        int j=minutes;
        while(j<n){ // tc->O(n)
            curUnsatCust += customers[j]*grumpy[j]; // adding the new element in the window
            curUnsatCust -= customers[i]*grumpy[i]; // removing the old element in the window
            i++;
            j++;
            maxUnsatCust=max(maxUnsatCust,curUnsatCust); 
        }

        int totalSat=maxUnsatCust;
        for(int i=0;i<n;i++) // tc-> O(n)
        {
            if(grumpy[i]==0)
                totalSat+=customers[i];
        }
        return totalSat;
    }
};

// tc-> O(n)
// sc -> O(1)
