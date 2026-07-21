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
    int ans= INT_MIN;
    int maxPathSum(TreeNode* root) {
        if(root->left ==nullptr && root->right == nullptr)
            return root->val;
        calcPathSum(root);
        return ans;
    }

    int calcPathSum(TreeNode* root)
    {
        if(root==nullptr)
            return 0;
        int left=max(0,calcPathSum(root->left));
        int right= max(0,calcPathSum(root->right));

        ans= max(ans, left+right+root->val);

        return root->val+ max(left, right);
    }
};
