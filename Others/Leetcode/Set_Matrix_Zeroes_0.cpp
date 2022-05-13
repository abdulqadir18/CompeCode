class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // cout<<matrix[0].size()<<matrix.size()<<"\n";
        map<int,int>mp,np;
        map<pair<int,int>,int>p;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==0)
                {
                    auto pi=make_pair(i,j);
                    p[pi]=1;
                }
            }
        }
                
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                auto pi=make_pair(i,j);
                if(p[pi]==1)
                {
                    if(mp[i]!=1)
                    {
                        mp[i]=1;
                        for(int k=0; k<matrix[0].size(); k++) matrix[i][k]=0;
                    }
                    if(np[j]!=1)
                    {
                        np[j]=1;
                        for(int k=0; k<matrix.size(); k++) matrix[k][j]=0;
                    }
                }
            }
        }
    }
};