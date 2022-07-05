class Solution {
public:
    
    bool canPartition(vector<int>& nums) {
        if(nums.size()<=1) return false;
        
        int totalSum=0;
        for(int i=0; i<nums.size(); i++) totalSum+=nums[i];
        if(totalSum%2) return false;
        
        int k=totalSum/2;
        vector<vector<bool>>dp(nums.size(),vector<bool>(k+1,false));
        
        //base case
        for(int i=0; i<nums.size(); i++) dp[i][0]=true;
        if(nums[0]<=k+1)dp[0][nums[0]]=true;
        
        //main loop
        for(int i=1; i<nums.size(); i++)
        {
            for(int target=1; target<=k; target++)
            {
                bool notTake=dp[i-1][target];
                bool take=false;
                if(target>=nums[i]) take=dp[i-1][target-nums[i]];
                dp[i][target]=(take||notTake);
                //cout<<i<<":"<<target<<" ";
            }
        }
        //cout<<"\n";
        return dp[nums.size()-1][k];
    }
};