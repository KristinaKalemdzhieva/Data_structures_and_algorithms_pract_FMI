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

    void preorder(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }

public:
    void preorderTraversal(TreeNode* root) {
        if(!root)
        {
            return;
        }
        
        preorder(root);
        cout << endl;
    }
};