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
    void solve(TreeNode* root, vector<string>  &ans, string t){
        //leaf node
        if(root->left == NULL && root->right == NULL){
            ans.push_back(t);
        }
        if(root->left){
            solve(root->left, ans, t+"->"+to_string(root->left->val));
        }
        if(root->right){
            solve(root->right, ans, t+"->"+to_string(root->right->val));
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root == NULL) return ans;

        solve(root, ans, to_string(root->val));
        return ans;
    }
};