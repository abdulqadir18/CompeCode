class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        int seen=0;
        for(int i=0; i<n; i++)
        {
            int ci=sentence[i]-'a';
            seen=seen | (1<<ci);
        }
        return seen==((1<<26)-1);
    }
};