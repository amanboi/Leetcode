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
 void helper(TreeNode* no , int d, int &sum ){
        if ( no == NULL){
            return ;
        }
        if ( d == 0 and no-> left == NULL and no->right == NULL){
            sum += no->val;
        }
        helper(no->right, 1, sum);
        helper(no->left, 0, sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        helper(root, -1, sum);
        return sum;
    }
};