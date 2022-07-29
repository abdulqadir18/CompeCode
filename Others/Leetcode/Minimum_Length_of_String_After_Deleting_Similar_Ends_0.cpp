class Solution {
public:
    int minimumLength(string s) {
        int i=0, j=s.size()-1;
        while(i<j && s[i]==s[j])
        {
            int x=s[i];
            while(i<=j && s[i]==x) i++;
            while(i<j && s[j]==x) j--;
            //cout<<i<<":"<<j<<" "; 
        }
        //cout<<"\n";
        return j-i+1;
    }
};