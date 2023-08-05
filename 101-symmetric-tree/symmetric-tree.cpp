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

//    bool solve (TreeNode* left , TreeNode* right)
//    {
//        if(left==NULL || right ==NULL) return left==right;
//        if(left->val != right->val) return false;
//        return  solve(left->left, right->right) && solve(left->right,right->left);
//    }
    bool isSymmetric(TreeNode* root) {
        // return root==NULL || solve(root->left,root->right);

        if(root==NULL) return true;

        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root->left, root->right});
        while(!q.empty())
        {
           pair<TreeNode*, TreeNode*> node = q.front();
            q.pop();
            if(!node.first && !node.second) continue;
            if(!node.first || !node.second) return false;
            if(node.first->val != node.second->val) return false;

            q.push({node.first->left, node.second->right});
            q.push({node.first->right, node.second->left});
        }
        return true;
    }
};