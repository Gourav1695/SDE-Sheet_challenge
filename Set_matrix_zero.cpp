class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int rows= matrix.size();
     int columns = matrix[0].size();
       int col0=1;
        //int row[rows]; //matrix[..][0]
        //int col[columns]; //matrix[0][..]
        for(int i= 0; i<rows; i++){
            for(int j=0; j<columns;j++){
                if(matrix[i][j]==0){
                   // mark the i-th row
                   matrix[i][0]=0;
                   // mark the j-th col
                   if(j!=0){
                       matrix[0][j]=0;
                   }
                   else
                   col0=0;
                   
                }
            }
        }
           for(int i= 1; i<rows; i++){
            for(int j=1; j<columns;j++){
                if(matrix[i][j]!=0)
                {
                if(matrix[i][0]==0||matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
            }
           }
           if(matrix[0][0]==0){
               for(int i=1;i<columns;i++)
               {
                   matrix[0][i]=0;
               }
           }
           if(col0==0){
               for(int i=0;i<rows; i++)
               {
                   matrix[i][0]=0;
               }
           }
    }
};

// time complexicity-> O(2*(n*m)), n is the no. of rows and m is the no. of columns
// sc-> O(1)
