class Solution {
public:
    
    int rob(vector<int>& nums) {
        int prev=nums[0], prev2=0;
        for(int i=1; i<nums.size(); i++)
        {
            int pick=nums[i];
            if(i>1) pick+=prev2;//for edge case
            int notpick=0+prev;
            int cur=max(pick,notpick);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};