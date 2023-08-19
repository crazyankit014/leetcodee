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
    // int LeftHeight(TreeNode* root)
    // {
    //     if(root==NULL) return 0;

    //     return LeftHeight(root->left)+1;
    // }
    //  int RightHeight(TreeNode* root)
    // {
    //     if(root==NULL) return 0;

    //     return RightHeight(root->right)+1;
    // }


    int countNodes(TreeNode* root) {
        // if(root==NULL) return 0;

        // int lh=LeftHeight(root);
        // int rh=RightHeight(root);
        // if(lh==rh)
        // {
        //     return pow(2,lh)-1;
        // }
        // return countNodes(root->left)+ countNodes(root->right)+1;
      
        if(root==NULL) return 0;

        return 1+ countNodes(root->left)+countNodes(root->right);

       
    }
};