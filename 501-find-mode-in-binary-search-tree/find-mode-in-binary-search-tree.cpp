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

  void inorder(TreeNode* root, int& currNum, int& currFreq, int& maxFreq, vector<int>& result) {
    if (!root) {
        return;
    }
       inorder(root->left,currNum,currFreq,maxFreq,result);
       
           if(root->val==currNum)
           {
               currFreq++;
           }
           else
           {
               currNum=root->val;
               currFreq=1;
           }
           if(currFreq>maxFreq)
           {
               result={};
               maxFreq=currFreq;
           }
           if(currFreq==maxFreq)
           {
               result.push_back(root->val);
           }
           inorder(root->right,currNum,currFreq,maxFreq,result);
   }
    vector<int> findMode(TreeNode* root) {
      int currNum=0;
       int currFreq=0;
       int maxFreq=0;
       vector<int>result;
       inorder(root,currNum,currFreq,maxFreq,result);
       return result;
    }
};