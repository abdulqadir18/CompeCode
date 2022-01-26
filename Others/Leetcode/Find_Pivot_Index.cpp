class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int endSum=0, beginSum=0;
        for(int i=0; i<nums.size(); i++)
        {
            endSum+=nums[i];
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            endSum-=nums[i];
            if(endSum==beginSum)
            {
                return i;
            }
            beginSum+=nums[i];
        }
        return -1;
    }
};