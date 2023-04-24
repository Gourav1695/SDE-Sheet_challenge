#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int x=0;
        int y=0;
        int z=0;
        int ans=0;
        for(auto it: stones){
            pq.push(it);
        }
       
        while(pq.size()>1){
           x= pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            z=x-y;
            pq.push(z);
        }
        if(pq.size()==0){
          ans= 0;
        }
        else if(pq.size()==1){
            ans =pq.top();
        }
        return ans;

    }
};

int main(){
    Solution obj;
    vector<int>vec={7,8,2,4,1,1};
   cout<< obj.lastStoneWeight(vec);
}
