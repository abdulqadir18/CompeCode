class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int fast=0, slow=0; fast<nums.size(); fast++)
        {
            if(nums[fast]!=0)
            {
                swap(nums[slow++],nums[fast]);
            }
        }
        
    }
};