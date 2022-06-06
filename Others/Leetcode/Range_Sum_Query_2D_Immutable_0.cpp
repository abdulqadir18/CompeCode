class NumMatrix {
public:
    vector<vector<int>>dp;
    NumMatrix(vector<vector<int>>& a) {
        if(!a.size() || !a[0].size()) return;
        vector<vector<int>>op(a.size()+1,vector<int>(a[0].size()+1,0));
        dp=op;
        for(int i=0; i<a.size(); i++)
        {
            for(int j=0; j<a[0].size(); j++)
            {
                dp[i+1][j+1]=dp[i+1][j]+dp[i][j+1]-dp[i][j]+a[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return dp[row2+1][col2+1]-dp[row2+1][col1]-dp[row1][col2+1]+dp[row1][col1];
    }
};
