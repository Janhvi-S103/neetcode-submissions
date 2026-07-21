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
    bool isValidBST(TreeNode* root) {
        int lo= INT_MIN;
        int hi=INT_MAX;
        return validate(root,lo,hi);
    }
    bool validate(TreeNode* root, int lo, int hi)
    {
        if(root==nullptr)
            return true;
        else if(root->val <=lo || root->val>=hi)
            return false;
        return validate(root->left,lo,root->val) && validate(root->right,root->val,hi);
    }

};
