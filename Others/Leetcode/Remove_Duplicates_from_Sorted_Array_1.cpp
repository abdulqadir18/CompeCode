class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int cur=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(cur!=nums[i])
            {
                nums[k++]=nums[i];
                cur=nums[i];
            }
        }
        return k;
    }
};