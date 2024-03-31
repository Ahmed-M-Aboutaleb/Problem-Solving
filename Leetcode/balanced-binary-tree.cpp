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
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        if(getBalanceFactor(root) > 1) {
            return false;
        }
        return min(isBalanced(root->left), isBalanced(root->right));
    }
private:
    int height(TreeNode* root) {
        if(!root)
            return -1;
        return max(height(root->left), height(root->right)) + 1;
    }
    int getBalanceFactor(TreeNode * root) 
    {
        if (!root)
        {
            return -1;
        }
        return abs(height(root->left) - height(root->right));
    }
};