class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,0);
        int left=0, right=nums.size()-1;
        while(left<right)
        {
            if(nums[left]+nums[right]==target)
            {
                ans[0]=left+1;
                ans[1]=right+1;
                return ans;
            }
            else if(nums[left]+nums[right]>target) right--;
            else left++;
        }
        return ans;
    }
};