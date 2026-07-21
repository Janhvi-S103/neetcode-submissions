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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>inord;
        inorderTrav(root,inord);
        return inord[k-1];
    }

    void inorderTrav(TreeNode* root, vector<int>& arr)
    {
        if(root==nullptr)
            return ;
        inorderTrav(root->left,arr);
        arr.push_back(root->val);
        inorderTrav(root->right,arr);
    }
};
