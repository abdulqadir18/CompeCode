class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int ans=0;
        sort(special.begin(),special.end());
        int i=bottom;
        int j=0;
        while(i<=top && j<special.size())
        {
            ans=max(ans,special[j]-i);
            i+=(special[j]-i+1);
            j++;
        }
        ans=max(ans,top-i+1);
        return ans;
    }
};