class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0, bottom=m-1, left=0, right=n-1;
        int d=1;
        while(top<=bottom && left<=right)
        {
            if(d==1)
            {
                for(int i=left; i<=right; i++) ans.push_back(matrix[top][i]);
                top++;
                d=2;
            }
            else if(d==2)
            {
                for(int i=top; i<=bottom; i++) ans.push_back(matrix[i][right]);
                right--;
                d=3;
            }
            else if(d==3)
            {
                for(int i=right; i>=left; i--) ans.push_back(matrix[bottom][i]);
                bottom--;
                d=4;
            }
            else if(d==4)
            {
                for(int i=bottom; i>=top; i--) ans.push_back(matrix[i][left]);
                left++;
                d=1;
            }
        }
        return ans;
    }
};