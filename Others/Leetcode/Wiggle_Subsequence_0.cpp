class Solution {
public:
    int wiggleMaxLength(vector<int>& a) {
        if(a.size()<2) return 1;
        int ans=1;
        int flag;
        int prev=a[0];
        if(a[0]>a[1]) flag=-1;
        else if(a[0]<a[1]) flag=1;
        else flag=0;
        
        for(int i=1; i<a.size()-1; i++)
        {
            if(flag>0)
            {
                if(a[i]<=a[i+1]) continue;
                else {ans++; flag=-1; prev=a[i];}
            }
            else if(flag<0)
            {
                if(a[i]>=a[i+1]) continue;
                else {ans++; flag=1; prev=a[i];}
            }
            else
            {
                if(a[i]==a[i+1]) continue;
                else if(a[i]>a[i+1]) flag=-1;
                else flag=1;
                prev=a[i];
            }
        }
        
        if((flag>0 && prev-a[a.size()-1]<0) || (flag<0 && prev-a[a.size()-1]>0)) ans++;
        return ans;
    }
};