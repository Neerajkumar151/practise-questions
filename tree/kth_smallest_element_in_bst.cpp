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
    int count=0;
    int ans=0;
    bool found=false;
    void inorder(TreeNode* root,int& k){
        if(root==NULL || found) return;
        inorder(root->left,k);
        if(found==true) return;
        count++;
        if(count==k){
            ans=root->val;
            found=true;
            return;
        }
        inorder(root->right,k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
};