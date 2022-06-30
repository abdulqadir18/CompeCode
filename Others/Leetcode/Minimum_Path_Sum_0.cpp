class Solution {
public:
    int recurse(vector<vector<int>> grid, int i, int j)
    {
        if(i==0 && j==0) return grid[0][0];
        if(i<0 || j<0) return 101;
        int up=grid[i][j]+recurse(grid,i-1,j);
        int left=grid[i][j]+recurse(grid,i,j-1);
        return min(up,left);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        return recurse(grid,m-1,n-1);
    }
};