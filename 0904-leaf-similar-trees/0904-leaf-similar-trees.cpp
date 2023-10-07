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
    void preorder(TreeNode* root, vector<int> &pre){
        //base case
        if(root == NULL)
        return;
        if(root->left == NULL && root->right == NULL){
            pre.push_back(root->val);
        }
        preorder(root->left, pre);
        preorder(root->right, pre);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        //base case
        if(root1 == NULL && root2 != NULL)
        return false;
        if(root1 != NULL && root2 == NULL)
        return false;
        if(root1 == NULL && root2 == NULL)
        return true;
        vector<int>pre1;
        vector<int>pre2;
        preorder(root1, pre1);
        preorder(root2, pre2);

        return pre1 == pre2;
    }
};