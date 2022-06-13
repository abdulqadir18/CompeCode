class Solution {
public:
    void backtrack(vector<int>& nums, int k, map<vector<int>,int>& m, vector<vector<int>>& ans)
    {
        if(k==0)
        {
            sort(nums.begin(),nums.end());
            if(m.find(nums)==m.end()) {m[nums]++; ans.push_back(nums); return;}
            else return;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            int val=nums[i];
            nums.erase(nums.begin()+i);
            backtrack(nums, k-1, m, ans);
            nums.insert(nums.begin()+i,val);
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        map<vector<int>,int>m;
        vector<int>nums;
        for(int i=1; i<=n; i++) nums.push_back(i);
        backtrack(nums,nums.size()-k,m,ans);
        return ans;
    }
};