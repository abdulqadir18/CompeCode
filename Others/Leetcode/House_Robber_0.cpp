class Solution {
public:
    int recurse(int i, vector<int>nums)
    {
        if(i==0) return nums[0];
        if(i<0) return 0;
        
        int pick=nums[i]+recurse(i-2,nums);
        int notpick=0+recurse(i-1,nums);
        return max(pick,notpick);
    }
    
    int rob(vector<int>& nums) {
        return recurse(nums.size()-1,nums);
    }
};