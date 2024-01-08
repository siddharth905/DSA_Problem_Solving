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
      void inorder(TreeNode* root,int low, int high,int &FunSum){
          if(root == NULL){
              return;
          }
          if(root->val >= low && root->val <= high){
              FunSum= FunSum + root->val;
          }
          inorder(root->left,low,high,FunSum);
           inorder(root->right,low,high,FunSum);

      }
    int rangeSumBST(TreeNode* root, int low, int high) {
       
        int FunSum=0;
       inorder(root,low,high,FunSum);
       return FunSum;
    }
};
/*
Time Complexity:-O(N)...N is number of Node
Space Complexity:-O(1)
*/
