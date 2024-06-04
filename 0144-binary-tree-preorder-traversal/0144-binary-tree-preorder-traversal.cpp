/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>vec;
    vector<int> preorderTraversal(TreeNode* root) {
         if(root == NULL)
             return vec;
        // vec.push_back(root->val);
        // preorderTraversal(root->left);
        // preorderTraversal(root->right);
        // return vec;
        stack<TreeNode*>sta;
        sta.push(root);
        vector<int>ans;
        while(!sta.empty())
        {
            TreeNode *node = sta.top();
            sta.pop();
            if(node->right != NULL)
                sta.push(node->right);
            if(node->left != NULL)
                sta.push(node->left);
            ans.push_back(node->val);          
        }
        return ans;
    }
};