class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count =0;
       for(auto& row: grid){
           for(auto& element : row)
           {
               if(element<0){
                   count++;
               }
           }
       }
       return count;
    }
};
