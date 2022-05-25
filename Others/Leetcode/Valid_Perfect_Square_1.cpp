class Solution {
public:
    bool isPerfectSquare(int num) {
        long lo=1, hi=num;
        while(lo<=hi)
        {
            long mid=lo+(hi-lo)/2;
            if(mid*mid==num) return true;
            else if(mid*mid>num) hi=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};