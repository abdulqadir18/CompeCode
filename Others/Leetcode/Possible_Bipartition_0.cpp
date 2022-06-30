class Solution {
public:
    bool bfs(vector<vector<int>>adj,int n, int node, vector<int>&color)
    {
        queue<int>q;
        q.push(node);
        color[node]=1;
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            for(auto i : adj[cur])
            {
                if(color[i]==color[cur]) return false;
                if(color[i]==-1)
                {
                    q.push(i);
                    color[i]=1-color[cur];
                }
            }
        }
        return true;
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& a) {
        //adj list for undirected graph starting from 1
        vector<vector<int>>adj(n+1);
        for(int i=0; i<a.size(); i++)
        {
            adj[a[i][0]].push_back(a[i][1]);
            adj[a[i][1]].push_back(a[i][0]);
        }
        
        //color
        vector<int>color(n+1,-1);
        
        //checking every vertex from 1 to n for multicomponent
        for(int i=1; i<=n; i++)
        {
            if(color[i]==-1)
            {
                if(!bfs(adj,n,i,color)) return false;
            }
        }
        return true;
    }
};