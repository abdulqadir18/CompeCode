class Solution {
public:
    bool f(vector<int>&a, int i, int s1, int s2, int s3, int s4)
    {
        if(i<0)
        {
           if(s1==s2 && s1==s3 && s1==s4) return true;
           else return false;
        }
        bool b1=f(a,i-1,s1+a[i],s2,s3,s4);
        bool b2=f(a,i-1,s1,s2+a[i],s3,s4);
        bool b3=f(a,i-1,s1,s2,s3+a[i],s4);
        bool b4=f(a,i-1,s1,s2,s3,s4+a[i]);
        return b1||b2||b3||b4;
        
    }
    
    bool makesquare(vector<int>& a) {
        int n=a.size()-1;
        bool b1=f(a,n-1,a[n],0,0,0);
        bool b2=f(a,n-1,0,a[n],0,0);
        bool b3=f(a,n-1,0,0,a[n],0);
        bool b4=f(a,n-1,0,0,0,a[n]);
        return b1||b2||b3||b4;
    }
};