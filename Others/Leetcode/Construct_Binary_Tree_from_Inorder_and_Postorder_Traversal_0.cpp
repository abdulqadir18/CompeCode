class Solution {
public:
    unordered_map<int,int>m;
    
    TreeNode *build(vector<int>&p, vector<int>&in, int &cur, int s, int e)
    {
        if(s>e) return NULL;
        TreeNode *root= new TreeNode(p[cur]);
        int mid=m[p[cur]];
        cur--;
        root->right=build(p,in,cur,mid+1,e);
        root->left=build(p,in,cur,s,mid-1);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& in, vector<int>& p) {
        for(int i=0; i<in.size(); i++)
        {
            m[in[i]]=i;
        }
        int cur=p.size()-1;
        return build(p,in,cur,0,in.size()-1);
    }
};