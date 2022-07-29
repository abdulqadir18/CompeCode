class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m=a.size(), n=a[0].size();
        int row=0, col=n-1;
        while(row<m && col>=0)
        {
            if(a[row][col]==target) return true;
            else if(a[row][col]>target) col--;
            else row++;
            
        }
        return false;
    }
};