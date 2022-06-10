class Solution {
public:
    void backtrack(vector<int>nums, int ptr, vector<vector<int>>& ans)
    {
        if(ptr>=nums.size()-1) {ans.push_back(nums); return;}
        
        for(int i=ptr; i<nums.size(); i++)
        {
            if(i!=ptr && nums[i]==nums[ptr]) continue;
            swap(nums[ptr], nums[i]); //swap
            backtrack(nums, ptr+1, ans);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        backtrack(nums,0,ans);
        return ans;
    }
};