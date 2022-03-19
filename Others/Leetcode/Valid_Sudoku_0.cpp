class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        for(int i=0; i<9; i++)
        {
            map<int,int>m;
            for(int j=0; j<9; j++)
            {
                if(a[i][j]=='.') continue;
                if(m.find(a[i][j])!=m.end()) return false;
                m[a[i][j]]++;
            }
            
            map<int,int>n;
            for(int j=0; j<9; j++)
            {
                if(a[j][i]=='.') continue;
                if(n.find(a[j][i])!=n.end()) return false;
                n[a[j][i]]++;
            }
        }
        
        for(int i=0; i<9; i+=3)
        {
            for(int j=0; j<9; j+=3)
            {
                map<int,int>m;
                for(int r=i; r<i+3 && r<9; r++)
                {
                    for(int c=j; c<j+3 && c<9; c++)
                    {
                        if(a[r][c]=='.') continue;
                        if(m.find(a[r][c])!=m.end()) return false;
                        m[a[r][c]]++;
                    }
                }
            }
        }
        return true;
    }
};