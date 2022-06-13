class Solution {
public:
    void backtrack(vector<int>nums, vector<int>& temp, int ptr, int sum, int target, vector<vector<int>>& ans)
    {
        if(sum==target) 
        {
            {ans.push_back(temp);  return;}
            
        }
        if(sum>target) return;
        
        for(int i=ptr; i<nums.size(); i++)
        {
            if(i>ptr && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            sum+=nums[i];
            backtrack(nums,temp,i+1,sum,target,ans);
            temp.pop_back();
            sum-=nums[i];
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        sort(nums.begin(),nums.end());
        backtrack(nums,temp,0,0,target,ans);
        return ans;
    }
};