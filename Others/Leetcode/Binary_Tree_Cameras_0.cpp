class Solution {
public:
    int noCamera=0, hasCamera=2, notNeeded=1;
    int ans=0;
    
    int dfs(TreeNode *root)
    {
        if(!root) return notNeeded;
        
        int l=dfs(root->left);
        int r=dfs(root->right);
        
        if(l==noCamera || r==noCamera) {ans++; return hasCamera;}
        else if(l==hasCamera || r==hasCamera) return notNeeded;
        else return noCamera;
    }
    
    int minCameraCover(TreeNode* root) {
        if(dfs(root)==noCamera) ans++;
        return ans;
    }
};