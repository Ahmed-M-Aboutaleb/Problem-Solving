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
    int res = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        dfs(root);
        return res;
    }
private:
    int dfs(TreeNode* root) {
        if(!root)
            return -1;
        int l = dfs(root->left), r = dfs(root->right);
        this->res = max(this->res, 2+l+r);
        return 1 + max(l,r);
    }
};