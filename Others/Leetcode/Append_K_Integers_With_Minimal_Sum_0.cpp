class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long ans=0;
        long long total=0;
        long long n=0;
        cout<<"\n";
        sort(nums.begin(), nums.end());
        if(nums[0]!=1)
        {
            long long start=0, end=nums[0]-1;
            n=end-start;
            if(n>0)
            {
                total+=n;
                if(total>=k)
                {
                    end-=(total-k);
                    ans=ans+ end*(end+1)/2 -start*(start+1)/2;
                    cout<<ans<<" ";
                    return ans;
                }
                else 
                {
                    ans=ans+ end*(end+1)/2 -start*(start+1)/2;
                    cout<<ans<<" ";
                }
            }
        }
        
        for(long long i=0; i<nums.size()-1; i++)
        {
            long long start=nums[i];
            long long end=nums[i+1]-1;
            n=end-start;
            if(n>0)
            {
                total+=n;
                if(total>=k)
                {
                    end-=(total-k);
                    ans=ans+ end*(end+1)/2 -start*(start+1)/2;
                    cout<<ans<<" ";
                    return ans;
                }
                else 
                {
                    ans=ans+ end*(end+1)/2 -start*(start+1)/2;
                    cout<<ans<<" ";
                }
            }
        }
        
        long long start=nums[nums.size()-1];
        long long end=start-total+k;
        ans=ans+ end*(end+1)/2 -start*(start+1)/2;
        cout<<ans<<" ";
        return ans;
    }
};