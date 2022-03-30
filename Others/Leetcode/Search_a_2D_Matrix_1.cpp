class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        if(m==0 || n==0) return false;
        int l=0, h=n*m-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(matrix[mid/m][mid%m]==target) return true;
            else if((matrix[mid/m][mid%m]<target)) l=mid+1;
            else h=mid-1;
        }
        return false;
    }
};