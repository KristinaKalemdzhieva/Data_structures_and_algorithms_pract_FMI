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

    void inorder(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }

public:
    void inorderTraversal(TreeNode* root) {
        if(!root)
        {
            return;
        }
        
        inorder(root);
        cout << endl;
    }
};