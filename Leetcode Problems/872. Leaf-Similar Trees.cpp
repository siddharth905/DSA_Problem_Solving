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
     void Inorder1(TreeNode* root1,vector<int>& v1){
         if(root1 == NULL){
             return;
         }
         if(root1->left==NULL){
             if(root1->right == NULL){
                 v1.push_back(root1->val);
             }
             
         }
         Inorder1(root1->left,v1);
         Inorder1(root1->right,v1);
        // return v1;
     }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
         Inorder1(root1,v1);
         Inorder1(root2,v2);
        
        if(v1 == v2){
            return true;
        }
        return false;
    }
};
/*
Time Complexity:- O(N)..N is number of Node in Tree
Space Complecity:- O(N)
*/
