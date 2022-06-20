class Solution {
public:
    TreeNode* inorderS(TreeNode *root)
    {
        TreeNode *cur=root;
        while(cur && cur->left) cur=cur->left;
        return cur;
    }
    
    TreeNode* deleteNode(TreeNode* root, int val) {
        if(!root) return root;
        else if(root->val>val) root->left=deleteNode(root->left,val);
        else if(root->val<val) root->right=deleteNode(root->right,val);
        else
        {
            if(!root->left)
            {
                TreeNode *temp=root->right;
                delete(root);
                return temp;
            }
            else if(!root->right)
            {
                TreeNode *temp=root->left;
                delete(root);
                return temp;
            }
            else
            {
                TreeNode *temp=inorderS(root->right);
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
            }   
        }
        return root;  
    }
};