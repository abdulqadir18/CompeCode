class Solution {
public:
    void backtrack(vector<int>nums, int ptr, map<vector<int>,int>& m, vector<vector<int>>& ans)
    {
        if(ptr>=nums.size())
        {
            if(m.find(nums)==m.end()) {m[nums]++; ans.push_back(nums); return;}
            else return;
        }
        
        for(int i=ptr; i<nums.size(); i++)
        {
            swap(nums[ptr],nums[i]); //swap
            backtrack(nums, ptr+1, m, ans);
            swap(nums[ptr],nums[i]); //reset
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        map<vector<int>,int>m;
        backtrack(nums,0,m,ans);
        return ans;
    }
};