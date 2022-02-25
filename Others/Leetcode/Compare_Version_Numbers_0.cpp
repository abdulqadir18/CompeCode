class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=max(version1.size(), version2.size())+1;
        vector<int>v1(n),v2(n);
        
        int k=0;
        for(int i=0; i<version1.size(); i++)
        {
            if(version1[i]=='.')k++;
            else v1[k]=v1[k]*10+(version1[i]-'0');
        }
        k=0;
        for(int i=0; i<version2.size(); i++)
        {
            if(version2[i]=='.')k++;
            else v2[k]=v2[k]*10+(version2[i]-'0');
        }
        
        for(int i=0; i<n; i++)
        {
            if(v1[i]>v2[i]) return 1;
            else if(v1[i]<v2[i]) return -1;
        }
        return 0;
    }
};