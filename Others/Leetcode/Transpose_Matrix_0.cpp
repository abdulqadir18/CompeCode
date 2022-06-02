class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
        vector<vector<int>>b;
        for(int i=0; i<a[0].size(); i++)
        {
            vector<int>temp;
            for(int j=0; j<a.size(); j++)
            {
                temp.push_back(a[j][i]);
            }
            b.push_back(temp);
        }
        return b;
    }
};