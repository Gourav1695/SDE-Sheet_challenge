class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int Max=0;
        int m= grid.size();//no of rows
        int n= grid[0].size();//no of columns
        for(int i=0; i<m;i++)
        {
            for(int j=0; j<n;j++)
            {//check if value is 1
                
                int count=1;
                if(grid[i][j]){
                    count_island(grid,i,j,count);
                    Max= max(Max,count);
                   
                }
            }
           
        }
         return Max;
    }
    int count_island(vector<vector<int >>&grid, int i, int j, int &count)
    {
        //check if it is within bounds
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
            return 0;
        if(grid[i][j]==0)//useless neighbour
            return 0;
        grid[i][j]=0;
        //call the neighbours if they are helpful or not
        if(count_island(grid, i-1, j,count )==1) count++;//above neighbour
        if(count_island(grid, i+1, j,count )==1) count++;//below neighbour  
        if(count_island(grid, i, j-1,count )==1) count++;//left neighbour
        if(count_island(grid, i, j+1,count )==1) count++;//right neighbour
        
        
        return 1;
        
    }
};
