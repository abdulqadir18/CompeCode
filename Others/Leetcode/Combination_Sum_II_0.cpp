class Solution {
public:
    void backtrack(vector<int>nums, vector<int>& temp, int ptr, int sum, int target, vector<vector<int>>& ans, map<vector<int>,int>& m)
    {
        if(sum==target) 
        {
            if(m.find(temp)==m.end()) {ans.push_back(temp); m[temp]++; return;}
            else return;
        }
        if(sum>target) return;
        
        for(int i=ptr; i<nums.size(); i++)
        {
            temp.push_back(nums[i]);
            sum+=nums[i];
            backtrack(nums,temp,i+1,sum,target,ans,m);
            temp.pop_back();
            sum-=nums[i];
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        map<vector<int>,int>m;
        sort(nums.begin(),nums.end());
        backtrack(nums,temp,0,0,target,ans,m);
        return ans;
    }
};