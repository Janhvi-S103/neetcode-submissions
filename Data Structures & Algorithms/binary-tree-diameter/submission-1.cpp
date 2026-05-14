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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        calcHeight(root, diameter);
        return diameter;
    }

    int calcHeight(TreeNode*root, int& diameter)
    {
        if(root==nullptr)
            return 0;
        int left_h=calcHeight(root->left, diameter);
        int right_h=calcHeight(root->right, diameter);

        diameter=max(diameter, left_h+right_h);
        
        return 1+ max(left_h, right_h);

    }
};
