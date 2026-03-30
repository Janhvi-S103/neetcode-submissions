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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL)
            return {};
        queue<TreeNode*>trav;
        trav.push(root);
        vector<vector<int>> result;
        while(!trav.empty())
        {
            int n= trav.size();
            vector<int> temp;
            for(int i=0; i < n; i++)
            {
                TreeNode* t= trav.front();
                trav.pop();
                temp.push_back(t->val);
                if(t->left != NULL)
                    trav.push(t->left);
                if(t->right != NULL)
                    trav.push(t->right);            
            }
            result.push_back(temp);   
        }
        return result;
    }
};
