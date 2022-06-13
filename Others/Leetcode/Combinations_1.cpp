class Solution {
public:
    void backtrack(vector<int>& nums, int ptr, int n, int k, vector<vector<int>>& ans)
    {
        if(nums.size()==k) {ans.push_back(nums); return;}
        
        for(int i=ptr; i<=n; i++)
        {
            nums.push_back(i);
            backtrack(nums,i+1,n,k,ans);
            nums.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>nums;
        backtrack(nums,1,n,k,ans);
        return ans;
    }
};