class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        sort(a.begin(),a.end());
        long long int m = (long long int) mass;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>m) return false;
            else m+=a[i];
        }
        return true;
    }
};