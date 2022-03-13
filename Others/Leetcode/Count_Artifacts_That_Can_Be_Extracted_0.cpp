class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        map<pair<int,int>,int> um;
        for(int i=0; i<dig.size(); i++)
        {
            pair<int,int> p= make_pair(dig[i][0],dig[i][1]);
            um[p]=2;
        }
        
        int ans=0;
        for(int k=0; k<artifacts.size(); k++)
        {
            int flag=1;
            for(int i=artifacts[k][0]; i<=artifacts[k][2]; i++)
            {
                for(int j=artifacts[k][1]; j<=artifacts[k][3]; j++)
                {
                    pair<int,int> p= make_pair(i,j);
                    if(um.find(p)==um.end()) flag=0;
                }
            }
            if(flag) ans++;
        }
        return ans;
    }
};