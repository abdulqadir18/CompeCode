class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root) return;
        if(!root->left && !root->right) return;
        if(root->left)
        {
            flatten(root->left);
            
            TreeNode *temp=root->right;
            root->right=root->left;
            root->left=NULL;
            
            TreeNode *cur=root->right;
            while(cur->right) cur=cur->right;
            cur->right=temp;
        }
        flatten(root->right);
    }
};