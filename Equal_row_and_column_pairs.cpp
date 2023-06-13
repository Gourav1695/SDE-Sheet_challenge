class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;
        int m = grid.size();
        int n = grid[0].size();
        // Taking rows as key and storing it's frequency
        for(int i =0; i<m; i++){
            mp[grid[i]]++;
        }
        
        int ans = 0;
        // Checking Columns with already present Rows
        for(int j = 0; j<n; j++){
            vector<int> col;
            for(int i = 0; i<m; i++){
                col.push_back(grid[i][j]);
            }

            if(mp[col]>0) ans += mp[col];
        }
        return ans;
    }
};
