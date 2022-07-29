class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        
        long long last=0, first=0;
        for(int i=0; i<nums.size(); i++) last=last+(long long)nums[i];
     
        for(int i=0; i<nums.size()-1; i++)
        {
            first=first+(long long)nums[i];
            last=last-(long long)nums[i];
            if(first>=last) ans++;
        }
        return ans;
    }
};