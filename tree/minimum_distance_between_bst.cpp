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
    int prev=INT_MIN;
    int ans=INT_MAX;
    void mindiff(TreeNode* root){
        if(root==NULL)return;

        mindiff(root->left);
        if(prev!=INT_MIN){
            ans=min(ans,root->val - prev);
        }
        prev=root->val;
        mindiff(root->right);
    }

    int minDiffInBST(TreeNode* root) {
        mindiff(root);
        return ans;
    }
};