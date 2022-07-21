class Solution {
public:
    bool f(vector<int>&a, int i, int s1, int s2, int s3, int s4, int max)
    {
        if(i<0)
        {
           if(s1==s2 && s1==s3 && s1==s4) return true;
           else return false;
        }
        bool b1=false, b2=false, b3=false, b4=false;
        if(s1+a[i]<=max) b1=f(a,i-1,s1+a[i],s2,s3,s4,max);
        if(s2+a[i]<=max && s2!=s1+a[i]) b2=f(a,i-1,s1,s2+a[i],s3,s4,max);
        if(s3+a[i]<=max && s3!=s2+a[i] && s3!=s1+a[i]) b3=f(a,i-1,s1,s2,s3+a[i],s4,max);
        if(s4+a[i]<=max && s4!=s3+a[i] && s4!=s2+a[i] && s4!=s1+a[i]) b4=f(a,i-1,s1,s2,s3,s4+a[i],max);
        return b1||b2||b3||b4;
        
    }
    
    bool makesquare(vector<int>& a) {
        int n=a.size()-1;
        int sum = 0;
        for (int val: a) 
        {
            sum += val;
        }
        if (sum % 4 != 0) return false;
        sort(a.begin(), a.end(),[](const int &l, const int &r){return l < r;});
        for(int val: a)
        {
            if(val>sum/4) return false;
        }
        bool b1=f(a,n-1,a[n],0,0,0,sum/4);
        bool b2=f(a,n-1,0,a[n],0,0,sum/4);
        bool b3=f(a,n-1,0,0,a[n],0,sum/4);
        bool b4=f(a,n-1,0,0,0,a[n],sum/4);
        return b1||b2||b3||b4;
    }
};