class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int i=a.size()-2;
        while(i>=0 && a[i+1]<=a[i])
        {
            i--;
        }
        if(i>=0)
        {
            int j=a.size()-1;
            while(a[j]<=a[i]) j--;
            swap(a[i],a[j]);
        }
        sort(a.begin()+i+1,a.end());
        
    }
};