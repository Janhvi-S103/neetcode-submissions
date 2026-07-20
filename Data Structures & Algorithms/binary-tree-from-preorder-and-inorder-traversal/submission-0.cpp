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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       if(preorder.empty() || inorder.empty())
            return nullptr;

        TreeNode* root=new TreeNode(preorder[0]);

        int root_index=find(inorder.begin(), inorder.end(),preorder[0])-inorder.begin();
       
        vector<int>leftPre(preorder.begin()+1, preorder.begin()+1+root_index);
        vector<int>leftIn(inorder.begin(),inorder.begin()+root_index);

        vector<int>rightPre(preorder.begin()+1+root_index, preorder.end());
        vector<int>rightIn(inorder.begin()+1+root_index, inorder.end());

        root->left= buildTree(leftPre,leftIn);
        root->right= buildTree(rightPre,rightIn);
        /*
        for(int i=0; i < root_index; i++)
        {
            root->left=insert(root->left, inorder[i]);
            root=root->left;
        }
        for(int i=root_index+1; i < inorder.size(); i++)
        {
            root->right=insert(root->right, inorder[i]);
            root=root->right;
        }
        */
        return root; 
    }
};
