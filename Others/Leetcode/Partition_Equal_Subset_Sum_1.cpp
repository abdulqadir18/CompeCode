class Solution {
public:
    bool f(vector<int>&nums, int i, int target, vector<vector<int>>&dp)
    {
        if(target==0) return true;
        if(i==0) return (target==nums[0]);
        if(dp[i][target]!=-1) return dp[i][target];
        bool notTake=f(nums,i-1,target,dp);
        bool take=false;
        if(target>=nums[i]) take=f(nums,i-1,target-nums[i],dp);
        
        return dp[i][target]= (take || notTake);
    }
    
    bool canPartition(vector<int>& nums) {
        if(nums.size()<=1) return false;
        
        int totalSum=0;
        for(int i=0; i<nums.size(); i++) totalSum+=nums[i];
        if(totalSum%2) return false;
        
        int k=totalSum/2;
        vector<vector<int>>dp(nums.size(),vector<int>(k+1,-1));
        return f(nums,nums.size()-1,k,dp);
    }
};