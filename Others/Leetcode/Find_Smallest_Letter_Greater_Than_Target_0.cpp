class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
        int lo=0, hi=a.size()-1;
        char ans=a[0];
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(a[mid]>target) {ans=a[mid]; hi=mid-1;}
            else lo=mid+1;
        }
        return ans;
    }
};