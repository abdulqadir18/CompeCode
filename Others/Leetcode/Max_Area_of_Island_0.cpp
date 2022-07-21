class Solution {
public:
    int dfs(vector<vector<int>>& grid, int x, int y, int row, int col)
    {
        if(x<0 || x>=row || y<0 || y>=col || grid[x][y]!=1) return 0;
        grid[x][y]=2;
        int up=dfs(grid,x+1,y,row,col);
        int right=dfs(grid,x,y+1,row,col);
        int down=dfs(grid,x-1,y,row,col);
        int left=dfs(grid,x,y-1,row,col);
        return 1+up+right+down+left;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int ans=0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]==1) ans=max(ans,dfs(grid,i,j,row,col));
            }
        }
        return ans;
    }
};