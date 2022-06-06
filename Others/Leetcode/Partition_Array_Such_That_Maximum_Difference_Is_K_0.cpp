class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int min=nums[0], max=nums[0];
        int ans=1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]-min>k){ans++; min=nums[i], max=nums[i];}
        }
        return ans;
    }
};