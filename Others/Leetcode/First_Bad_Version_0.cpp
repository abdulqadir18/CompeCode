class Solution {
public:
    int firstBadVersion(int n) {
        long lo=1, hi=n, ans=0;
        while(lo<=hi)
        {
            long mid=lo+(hi-lo)/2;
            if(isBadVersion(mid)) {hi=mid-1; ans=mid;}
            else {lo=mid+1;}
        }
        return ans;
    }
};