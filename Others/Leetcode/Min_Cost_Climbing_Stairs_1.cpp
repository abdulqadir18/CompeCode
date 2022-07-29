class Solution {
public:
    int f(vector<int>& cost, int i, vector<int>&dp)
    {
        if(i>=cost.size()-2) return cost[i];
        if(dp[i]!=-1) return dp[i];
        int i1=INT_MAX, i2=INT_MAX;
        if(i+1<cost.size()) i1=cost[i]+f(cost,i+1,dp);
        if(i+2<cost.size()) i2=cost[i]+f(cost,i+2,dp);
        return dp[i]=min(i1,i2);
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        return min(f(cost,0,dp),f(cost,1,dp));
    }
};