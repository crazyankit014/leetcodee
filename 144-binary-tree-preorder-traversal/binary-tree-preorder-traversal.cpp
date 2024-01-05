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
    private:
    void preorder(TreeNode* root, vector<int>& nodes){
        if (!root) {
            return;
        }
        nodes.push_back(root -> val);
        preorder(root -> left, nodes);
        preorder(root -> right, nodes);
    }
public:
//  vector<int> nodes;
    vector<int> preorderTraversal(TreeNode* root) {
    //     if(root)
    //     {
    //  nodes.push_back(root->val);
    //    preorderTraversal(root->left);
    //    preorderTraversal(root->right);
    //     }
  

    //     return nodes;
    vector<int>nodes;
    preorder(root,nodes);
    return nodes;
    }

};