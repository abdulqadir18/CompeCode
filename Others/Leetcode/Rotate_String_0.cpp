class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        for(int i=0; i<s.size(); i++)
        {
            string f=s.substr(0,i+1);
            string b=s.substr(i+1);
            if(goal==(b+f)) return true;
        }
        return false;
    }
};