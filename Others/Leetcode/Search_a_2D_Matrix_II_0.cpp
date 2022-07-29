class Solution {
public:
    bool binaryS(vector<int>&a,int target)
    {
        int low=0, high=a.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(a[mid]==target) return true;
            else if(a[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        for(int i=0; i<m; i++)
        {
            if(binaryS(matrix[i],target)) return true;
        }
        return false;
    }
};