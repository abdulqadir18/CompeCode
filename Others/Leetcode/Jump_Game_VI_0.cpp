class Solution {
public:
    int min(int a, int b)
    {
        return (a<b)?a:b;
    }
    int f(vector<int>&nums, int k, int i, vector<int>&dp)
    {
        if(i==nums.size()-1) return nums[i];
        if(dp[i]!=INT_MIN) return dp[i];
        int ans=INT_MIN;
        for(int j=i+1; j<= min(nums.size()-1,i+k); j++)
        {
            ans=max(ans,(nums[i]+f(nums,k,j,dp)));
        }
        return dp[i]=ans;
    }
    
    int maxResult(vector<int>& nums, int k) {
        vector<int>dp(nums.size()+1,INT_MIN);
        return f(nums,k,0,dp);
    }
};