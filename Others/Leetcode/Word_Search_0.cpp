class Solution {
public:
    void dfs(vector<vector<char>>& a, int x, int y, int r, int c, string word, int ptr, bool & flag)
    {
        if(ptr>=word.size()) flag=true;
        if(x>=r || x<0 || y>=c || y<0 || a[x][y]!=word[ptr]) return;
        int temp=a[x][y];
        a[x][y]='0';
        dfs(a,x+1,y,r,c,word,ptr+1,flag);
        dfs(a,x,y+1,r,c,word,ptr+1,flag);
        dfs(a,x-1,y,r,c,word,ptr+1,flag);
        dfs(a,x,y-1,r,c,word,ptr+1,flag);
        a[x][y]=temp;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        //cout<<"\n";
        int r=board.size();
        int c=board[0].size();
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(board[i][j]==word[0])
                {
                    //cout<<"yes ";
                    bool flag=false;
                    dfs(board,i,j,r,c,word,0,flag);
                    if(flag) return true;
                }
            }
        }
        return false;
    }
};