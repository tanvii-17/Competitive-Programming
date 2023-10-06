class Solution {
public:
   void inorder(TreeNode *root,vector<int>& ans)
   {
       //base case
       if(root==NULL) return;

    
       //call 1
       inorder(root->left,ans);
        //kaam
       ans.push_back(root->val);
       //call 2
       inorder(root->right,ans);

   }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }
};