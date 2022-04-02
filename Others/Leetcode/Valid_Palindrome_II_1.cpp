class Solution {
public:
    bool validPalindrome(string s) {
        // cout<<"\n";
        int n=s.size();
        string r=s;
        reverse(r.begin(),r.end());
        if(s==r) return true;
        for(int i=0; i<n; i++)
        {
            
                string s1,r1;
                s1.append(s,0,i);
                s1.append(s,i+1,n-i-1);
                r1=s1;
                reverse(r1.begin(),r1.end());
                // cout<<s1<<" ";
                if(s1==r1) return true;
                
                // string s2,r2;
                // s2.append(s,0,i+1);
                // s2.append(s,i+2,n-i-2);
                // r2=s2;
                // reverse(r2.begin(),r2.end());
                // // cout<<s2<<" ";
                // if(s2==r2) return true;
            
        }
        return false;
    }
};