class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(long long j=0; j<nums.size(); j++)
        {
            if(j>0 && nums[j]==nums[j-1]) continue;
            for(long long i=j+1; i<nums.size(); i++)
            {
                if(i>j+1 && nums[i]==nums[i-1]) continue;
                long long l=i+1, r=nums.size()-1;
                while(l<r)
                {
                    long long s1=nums[l]+nums[r];
                    long long s2=nums[j]+nums[i];
                    if(s1<target-s2) l++;
                    else if(s1>target-s2) r--;
                    else
                    {
                        ans.push_back(vector<int>{nums[j],nums[i],nums[l],nums[r]});
                        while(l<r && nums[l]==nums[l+1]) l++;
                        while(l<r && nums[r]==nums[r-1]) r--;
                        l++; r--;
                    }
                }
            }
        }
        
        return ans;
    }
};