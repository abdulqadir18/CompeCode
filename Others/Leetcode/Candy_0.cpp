class Solution {
public:
    int candy(vector<int>& a) {
        int n=a.size();
        if(n==1) return 1;
        
        //giving 1 candy to all
        vector<int>nums(n,1);
        
        //giving more candy than left one
        for(int i=1; i<n; i++)
        {
            if(a[i]>a[i-1]) nums[i]=nums[i-1]+1;
        }
        
        //giving more candy than right one
        for(int i=n-1; i>0; i--)
        {
            if(a[i-1]>a[i]) nums[i-1]=max(nums[i-1],nums[i]+1);
        }
        
        //getting sum
        int ans=0;
        for(int i=0; i<n; i++) ans+=nums[i];
        return ans;
    }
};