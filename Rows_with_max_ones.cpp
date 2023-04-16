class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> vec;
        int rows = mat.size();
        int cols = mat[0].size();
   
        int max_sum=0;
        int index =0;
        

        
        for (int i = 0; i < rows; i++) {
            int sum = 0;
            for (int j = 0; j < cols; j++) {
                sum += mat[i][j];
            }
            if(sum>max_sum){
                max_sum=sum;
                index=i;
            }
                 
           
        }
        
//    vec.push_back(index);
//         vec.push_back(max_sum);
        
        
//         return vec;
      return {index, max_sum};
    }
};
 TC -> O(N^2) N is the number of elements in the 2d matrix
 SC -> O(1) as we are using constant space
