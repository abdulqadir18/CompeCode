class Solution {
public:
    bool searchMatrix(vector<vector<int>>& vect, int target) {
        for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if(vect[i][j]==target) return true;
        }   
    }
        return false;
    }
};