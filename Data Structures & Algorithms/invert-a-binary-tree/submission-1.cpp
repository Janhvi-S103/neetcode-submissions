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

        // left ko right right ko left
        if(root ==NULL)
            return NULL;
        if(root->left==NULL && root->right ==NULL)
            return root;
        if(root->left == NULL)
        {
            root->left = root->right;
            root->right= NULL;
            invertTree(root->left);
            return root;
        }
        if(root->right == NULL)
        {
            root->right = root->left;
            root->left = NULL;
            invertTree(root->right);
            return root;
        }
          
        TreeNode* temp;
        temp=root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
