class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>m;
        unordered_set<char>s;
        char c='a';
        for(int i=0; i<key.size(); i++)
        {
            if(key[i]==' ') continue;
            else if(s.find(key[i])!=s.end()) continue;
            else
            {
                m[key[i]]=c;
                c++;
                s.insert(key[i]);
                //cout<<c<<" ";
            }
        }
        
        for(int i=0; i<message.size(); i++)
        {
            if(message[i]==' ') continue;
            else message[i]=m[message[i]];
        }
        return message;
    }
};