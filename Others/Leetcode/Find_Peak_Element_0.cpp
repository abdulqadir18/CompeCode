class Solution {
public:
    int findPeakElement(vector<int>& a) {
        if(a.size()==1) return 0;
        int lo=0, hi=a.size()-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(mid==0)
            {
                if(a[mid]>a[mid+1]) return mid;
                else hi--;
            }
            else if(mid==a.size()-1)
            {
                if(a[mid]>a[mid-1]) return mid;
                else lo++;
            }
            else if(a[mid]>a[mid+1] && a[mid]>a[mid-1]) return mid;
            else if(a[mid]<a[mid+1])
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
        return a.size()-1;
    }
};