class Solution {
public:
    void backtrack(vector<int>nums, vector<int>& temp, int ptr, int sum, int target, vector<vector<int>>& ans)
    {
        if(sum==target) {ans.push_back(temp); return;}
        if(sum>target) return;
        
        for(int i=ptr; i<nums.size(); i++)
        {
            temp.push_back(nums[i]);
            sum+=nums[i];
            backtrack(nums,temp,i,sum,target,ans);
            temp.pop_back();
            sum-=nums[i];
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(nums,temp,0,0,target,ans);
        return ans;
    }
};