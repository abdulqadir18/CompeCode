class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mr;
        for(int i=0; i<ransomNote.size(); i++)
        {
            mr[ransomNote[i]]++;
        }
        map<char,int>mm;
        for(int i=0; i<magazine.size(); i++)
        {
            mm[magazine[i]]++;
        }
        
        for(char c='a'; c<='z'; c++)
        {
            if(mm[c]<mr[c]) return false;
        }
        return true;
    }
};