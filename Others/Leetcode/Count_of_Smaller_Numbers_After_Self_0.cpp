class Solution {
public:
    void mergeSort(int start, int end, vector<pair<int,int>>&nums, vector<pair<int,int>>&temp, vector<int>&ans)
    {
        if(start>=end) return;
        
        int mid=start+((end-start)/2);
        //cout<<mid<<" ";
        mergeSort(start,mid,nums,temp,ans);
        mergeSort(mid+1,end,nums,temp,ans);
        
        int left=start, right=mid+1;
        int index=start;
        int noOfRightLessThanLeft=0;
        while(left<=mid && right<=end)
        {
            //cout<<left<<":"<<right<<" ";
            if(nums[left].first<=nums[right].first)
            {
                ans[nums[left].second]+=noOfRightLessThanLeft;
                temp[index++]=nums[left++];
            }
            else
            {
                temp[index++]=nums[right++];
                noOfRightLessThanLeft++;
            }
            
        }
        while(left<=mid)
        {
            ans[nums[left].second]+=noOfRightLessThanLeft;
            temp[index++]=nums[left++];
        }
        while(right<=end)
        {
            temp[index++]=nums[right++];
        }
        
        for(int i=start; i<=end; i++) nums[i]=temp[i];
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        //cout<<n<<" ";
        vector<pair<int,int>>newNums,temp;
        vector<int>ans(n,0);
        for(int i=0; i<n; i++) {newNums.push_back({nums[i],i}); temp.push_back({nums[i],i});}
        //cout<<"voila";
        mergeSort(0,n-1,newNums,temp,ans);
        return ans;
    }
};