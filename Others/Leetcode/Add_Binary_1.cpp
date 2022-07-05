class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1, j=b.size()-1;
        char carry='0';
        while(i>=0 && j>=0)
        {
            if(a[i]=='1' && b[j]=='1')
            {
                if(carry=='1') {ans.push_back('1'); carry='1';}
                else {ans.push_back('0'); carry='1';}
            }
            else if(a[i]=='1' || b[j]=='1')
            {
                if(carry=='1') {ans.push_back('0'); carry='1';}
                else {ans.push_back('1'); carry='0';}
            }
            else
            {
                if(carry=='1') {ans.push_back('1'); carry='0';}
                else {ans.push_back('0'); carry='0';}
            }
            i--; j--;
        }
        
        while(i>=0)
        {
            if(a[i]=='1')
            {
                if(carry=='1') {ans.push_back('0'); carry='1';}
                else {ans.push_back('1'); carry='0';}
            }
            else
            {
                if(carry=='1') {ans.push_back('1'); carry='0';}
                else {ans.push_back('0'); carry='0';}
            }
            i--;
        }
        
        while(j>=0)
        {
            if(b[j]=='1')
            {
                if(carry=='1') {ans.push_back('0'); carry='1';}
                else {ans.push_back('1'); carry='0';}
            }
            else
            {
                if(carry=='1') {ans.push_back('1'); carry='0';}
                else {ans.push_back('0'); carry='0';}
            }
            j--;
        }
        
        if(carry=='1') ans.push_back('1');
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};