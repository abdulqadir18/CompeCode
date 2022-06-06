class Solution {
public:
    unordered_map<int,int>m;
    
    TreeNode *build(vector<int>&p, vector<int>&in, int &cur, int s, int e)
    {
        if(s>e) return NULL;
        TreeNode *root= new TreeNode(p[cur]);
        int mid=m[p[cur]];
        cur++;
        root->left=build(p,in,cur,s,mid-1);
        root->right=build(p,in,cur,mid+1,e);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& p, vector<int>& in) {
        for(int i=0; i<in.size(); i++)
        {
            m[in[i]]=i;
        }
        int cur=0;
        return build(p,in,cur,0,in.size()-1);
    }
};