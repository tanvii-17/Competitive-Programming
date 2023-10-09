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
    TreeNode* solve(vector<int>& nums, int i, int j){
        //base case
        if(i>j) return NULL;
        int node = i;
        for(int k=i+1; k<=j; k++){
            if(nums[k] > nums[node]){
                node = k;
            }
        }
         TreeNode* root = new TreeNode(nums[node]);
         root->left = solve(nums, i, node-1);
         root->right = solve(nums, node+1, j);  
         return root; 
        }
    

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums, 0, nums.size()-1);
    }
};