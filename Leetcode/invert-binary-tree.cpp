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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return root;
        if(root->left == NULL && root->right == NULL)
            return root;
        if(root->left == NULL && root->right != NULL) {
            root->left = root->right;
            root->right = NULL;
            invertTree(root->left);
            return root;
        }
        if(root->right == NULL && root->left != NULL) {
            root->right = root->left;
            root->left = NULL;
            invertTree(root->right);
            return root;
        }
        if(root->left->left != NULL || root->left->right != NULL) {
            invertTree(root->left);
        } 
        if(root->right->left != NULL || root->right->right != NULL) {
            invertTree(root->right);
        } 
        TreeNode* tempNode = root->right;
        root->right = root->left;
        root->left = tempNode;
        return root;
    }
};