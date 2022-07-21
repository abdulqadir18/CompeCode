class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        if(!root->left && !root->right) return true;
        if(!root->left || !root->right || root->left->val!=root->right->val) return false;
        
        queue<TreeNode*>q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty() && !q2.empty())
        {
            TreeNode *root1=q1.front(), *root2=q2.front();
            q1.pop(); q2.pop();
            if(root1->val!=root2->val) return false;
            if((!root1->left && root2->right) || (root1->left && !root2->right)) return false;
            if((!root1->right && root2->left) || (root1->right && !root2->left)) return false;
            
            if(root1->left) q1.push(root1->left);
            if(root1->right) q1.push(root1->right);
            
            if(root2->right) q2.push(root2->right);
            if(root2->left) q2.push(root2->left);
        }
        
        if(!q1.empty() || !q2.empty()) return false;
        return true;
    }
};