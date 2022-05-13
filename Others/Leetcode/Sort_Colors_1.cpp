class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0, cnt2=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0) cnt0++;
            else if(nums[i]==1) cnt1++;
            else cnt2++;
        }
        
        int cnt=0;
        while(cnt0--) nums[cnt++]=0;
        while(cnt1--) nums[cnt++]=1;
        while(cnt2--) nums[cnt++]=2;
    }
};