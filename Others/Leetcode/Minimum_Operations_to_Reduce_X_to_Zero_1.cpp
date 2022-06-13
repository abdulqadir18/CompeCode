class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = accumulate(nums.begin(), nums.end(), -x);
        if(target==0) return nums.size();
        
        int ans=INT_MIN;
        unordered_map<int,int>m;
        int sum=0;
        m[0]=-1;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            if(m.find(sum-target)!=m.end()) ans=max(ans, i-m[sum-target]);
            m[sum]=i;
        }
        return (ans==INT_MIN?-1:nums.size()-ans);
    }
};