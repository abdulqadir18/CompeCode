class Solution {
public:
    int missingNumber(vector<int>& a) {
        sort(a.begin(), a.end());
        for(int i=0; i<a[a.size()-1]; i++)
        {
            if(i!=a[i]) return i;
        }
        return a[a.size()-1]+1;
    }
};