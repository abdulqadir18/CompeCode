class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        vector<int>psum(nums.size());
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            psum[i]=sum;
        }
        
        unordered_map<int,int>m;
        int ans=0;
        int minus=0;
        int indi=-1;
        for(int i=0; i<nums.size(); i++)
        {
            if(m.find(nums[i])==m.end())
            {
                m[nums[i]]=i;
            }
            else
            {
                indi=max(m[nums[i]],indi);
                minus=psum[indi];
                m[nums[i]]=i;
            }
            ans=max(ans,psum[i]-minus);
            //cout<<psum[i]-minus<<" ";
        }
        //cout<<"\n";
        return ans;
    }
};