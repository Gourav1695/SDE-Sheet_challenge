// #include <bits/stdc++.h>
// using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        if(costs[0]>coins){
            // cout<<"0"<<endl;
            return 0;
        }
        int ans=1;
        int sum=costs[0];
        for(int i=1; i<costs.size();i++)
        {
            if( sum+costs[i]<=coins){
                sum=sum+ costs[i];
                ans++;

            }
            
        }
        // cout<<ans<<endl;
        return ans;
    }
};

// int main(){
//     Solution solve;
//     vector<int>arr={1,6,3,1,2,5};
//     int coins=20;
//     solve.maxIceCream(arr,coins);
//     return 0;
// }
