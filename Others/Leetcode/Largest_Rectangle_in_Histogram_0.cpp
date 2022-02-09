class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        int maxAns=0;
        for(int i=0; i<a.size(); i++)
        {
            int left=i, right=i;
            while(left>=0 && a[left]>=a[i]) left--;
            while(right<a.size() && a[right]>=a[i]) right++;
            int area=(right-left-1)*a[i];
            maxAns=max(maxAns,area);
        }
        return maxAns;
    }
};