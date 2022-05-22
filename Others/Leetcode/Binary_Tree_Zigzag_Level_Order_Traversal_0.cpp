class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        stack<TreeNode*>s1,s2;
        if(!root) return ans;
        s1.push(root);
        while(!s1.empty() || !s2.empty())
        {
            vector<int>a;
            while(!s1.empty())
            {
                TreeNode *temp=s1.top();
                s1.pop();
                a.push_back(temp->val);
                if(temp->left) s2.push(temp->left);
                if(temp->right) s2.push(temp->right);
            }
            if(a.size()) ans.push_back(a);
            
            vector<int>b;
            while(!s2.empty())
            {
                TreeNode *temp=s2.top();
                s2.pop();
                b.push_back(temp->val);
                if(temp->right) s1.push(temp->right);
                if(temp->left) s1.push(temp->left);
            }
            if(b.size()) ans.push_back(b);
        }
        return ans;
    }
};