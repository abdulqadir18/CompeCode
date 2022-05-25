class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(!root) return ans;
        bool isFirst=true;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            TreeNode *temp=q.front();
            q.pop();
            if(!temp)
            {
                if(q.empty()) return ans;
                q.push(NULL);
                isFirst=true;
            }
            else
            {
                if(isFirst)
                {
                    ans.push_back(temp->val);
                    isFirst=false;
                }
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
        }
        
        return ans;
    }
};