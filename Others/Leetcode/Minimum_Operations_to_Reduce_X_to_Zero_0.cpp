class Solution {
public:
    void backtrack(vector<int>nums, int k, int x, vector<int>& ans)
    {
        if(x==0){ans.push_back(k); return;}
        if(!nums.size() || x<0) return;
        
        int l=nums[0];
        int r=nums[nums.size()-1];
        nums.pop_back();
        backtrack(nums, k+1, x-r, ans);
        nums.push_back(r);
        
        nums.erase(nums.begin()+0);
        backtrack(nums, k+1, x-l, ans);
        nums.insert(nums.begin(),l);
    }
    
    int minOperations(vector<int>& nums, int x) {
        vector<int>ans;
        backtrack(nums,0,x,ans);
        if(!ans.size()) return -1;
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};