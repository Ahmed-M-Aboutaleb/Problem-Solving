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
    string postorderOFSub = "", postorderOFR = "";
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot)
            return true;
        if(!root)
            return false;
        if(isSameTree(root, subRoot))
            return true;
        return isSubtree(root->left, subRoot) ||
        isSubtree(root->right, subRoot);
    }
private:
    bool isSameTree(TreeNode* root, TreeNode* root2) {
        if(!root && !root2)
            return true;
        if(root && root2 && root->val == root2->val) {
            return (isSameTree(root->left, root2->left) && isSameTree(root->right, root2->right));
        }
        return false;
    }
};