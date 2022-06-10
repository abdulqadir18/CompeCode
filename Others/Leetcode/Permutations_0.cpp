class Solution {
public:
    void backtrack(vector<int>nums, int ptr, vector<vector<int>>& ans)
    {
        if(ptr>=nums.size()) {ans.push_back(nums); return;}
        
        for(int i=ptr; i<nums.size(); i++)
        {
            swap(nums[ptr], nums[i]); //swap
            backtrack(nums, ptr+1, ans);
            swap(nums[ptr], nums[i]); //reset
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        backtrack(nums,0,ans);
        return ans;
    }
};