class Solution {
public:
    int missingNumber(vector<int>& a) {
        int i=0, x=0;
        for(i=0; i<a.size(); i++)
        {
            x=x^i^a[i];
        }
        return x^i;
    }
};