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
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        int leftd=minDepth(root->left);
        int rightd=minDepth(root->right);
        if(!root->left&&!root->right){
            return 1;
        }
        if(!root->right){
            return 1+leftd;
        }
        if(!root->left){
            return 1+rightd;
        }
        return min(leftd,rightd)+1;
        
    }
};