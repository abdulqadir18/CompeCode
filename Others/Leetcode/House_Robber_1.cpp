class Solution {
public:
    int recurse(int i, vector<int>nums, vector<int>&dp)
    {
        if(i==0) return nums[0];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=nums[i]+recurse(i-2,nums,dp);
        int notpick=0+recurse(i-1,nums,dp);
        return dp[i]=max(pick,notpick);
    }
    
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        return recurse(nums.size()-1,nums,dp);
    }
};