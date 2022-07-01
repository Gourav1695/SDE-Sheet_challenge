class Solution {
public:
    static bool comp( const vector<int > &b1, const vector< int> &b2)
    {
        return b1[1]>b2[1];
    }
    int maximumUnits(vector<vector<int>>& boxType, int truckSize) {
        int n= boxType.size();
        
        sort (boxType.begin(),boxType.end(),comp);
        
        int total=0;
        int ans=0;
        
        for (int i=0; i<n;i++)
        {
            if(total+boxType[i][0]>truckSize){
                ans+=(truckSize-total)*boxType[i][1];
                break;
            }
            else{
                ans+=boxType[i][0]*boxType[i][1];
                total+=boxType[i][0];
            }
        }
        return ans;
    }
};
