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
    void preorder(TreeNode* root, int target, vector<vector<int>> &ans,
        int sum, vector<int>temp){
            //base case
            if(root == NULL) return;
            sum += root->val;
            temp.push_back(root->val);
            if(root->left == NULL && root->right == NULL && sum == target){
                ans.push_back(temp);
                return;
            }
            preorder(root->left,target,ans,sum,temp);
            preorder(root->right,target,ans,sum,temp);
 
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        //base case
        if(root == NULL)
        return ans;
        vector<int>temp;
        preorder(root, targetSum, ans, 0, temp);
        return ans;
    }
};