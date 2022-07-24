class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        // start from the [last row, first column] element
        int i=n-1;
        int j=0;
        while(j<m && i>=0){
            if(matrix[i][j]==target) // target found
                return true;
            else if(matrix[i][j]>target) //target is smaller go upwards
                --i; // decrease the row index
            else // target is larger go rightwards
                ++j; // increase the column index
        }
        return false; // target not found
    }
};
