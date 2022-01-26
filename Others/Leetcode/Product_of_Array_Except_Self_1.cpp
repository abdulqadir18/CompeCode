class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>l(n),r(n);
        l[0]=1;
        r[0]=1;
        for(int i=1; i<n; i++)
        {
            l[i]=l[i-1]*nums[i-1];
            r[i]=r[i-1]*nums[n-i];
        }
        
        vector<int>ans(n);
        for(int i=0; i<n; i++)
        {
            ans[i]=l[i]*r[n-i-1];
        }
        
        
        return ans;
    }
};