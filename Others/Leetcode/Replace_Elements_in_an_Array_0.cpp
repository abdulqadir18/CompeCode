class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        map<int,int>m;
        for(int i=0; i<nums.size(); i++) m[nums[i]]=i;
        
        for(int i=0; i<op.size(); i++)
        {
            nums[m[op[i][0]]]=op[i][1];
            m[op[i][1]]=m[op[i][0]];
        }
        
        return nums;
    }
};