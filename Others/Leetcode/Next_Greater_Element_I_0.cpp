class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums1.size(); i++)
        {
            int cur=nums2.size()-1;
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums1[i]==nums2[j])
                {
                    cur=j;
                    break;
                }
            }
            int nextGreater=-1;
            for(int j=cur+1; j<nums2.size(); j++)
            {
                if(nums2[j]>nums2[cur])
                {
                    nextGreater=nums2[j];
                    break;
                }
            }
            
            nums1[i]=nextGreater;
        }
        return nums1;
    }
};