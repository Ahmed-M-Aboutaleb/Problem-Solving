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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        if(!p || !q)
            return false;
        stack<TreeNode*> s,ss;
        TreeNode *travNode = p,*travNode2 = q;
        do
        {
            while (travNode)
            {
                if(!travNode2) {
                    return false;
                }
                s.push(travNode);
                ss.push(travNode2);
                travNode = travNode->left;
                travNode2 = travNode2->left;
            }
            if(travNode2) {
                return false;
            }
            travNode = s.top();
            travNode2 = ss.top();
            s.pop();
            ss.pop();
            if(travNode2->val != travNode->val) {
                return false;
            }
            travNode2 = travNode2->right;
            travNode = travNode->right;
        } while (!s.empty() || travNode);
        if((s.empty() && !ss.empty()) || (!travNode && travNode2) || (ss.empty() && !s.empty())) {
            return false;
        }
        return true;
    }
};