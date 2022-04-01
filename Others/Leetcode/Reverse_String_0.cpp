class Solution {
public:
    void reverseString(vector<char>& a) {
        for(int i=0; i<a.size()/2; i++)
        {
            swap(a[i],a[a.size()-i-1]);
        }
    }
};