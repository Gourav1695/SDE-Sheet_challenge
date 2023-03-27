class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        rows, cols= len(grid),len(grid[0])

        res =[[float("inf")]*(cols+1) for r in range(rows+1)] # making one extra row at bottom with infinity and one extra column in right 
        res[rows][cols-1]=0# making the below bottom right value as 0 for computation

        for r in range(rows-1, -1, -1):
            for c in range(cols -1, -1 ,-1): 
                res[r][c]= grid[r][c]+min(res[r+1][c],res[r][c+1])# here I am calculating the the minimum of bottom and right element which ever is mimimun adding to the ans
        return res[0][0] # lastly returning the top left element which is the result
