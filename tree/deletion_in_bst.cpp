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

    TreeNode* inordersuccessor(TreeNode* root){
        while(root!=NULL && root->left!=NULL){
            root=root->left;
        }
        return root;
    }

    TreeNode* deletenode(TreeNode* root, int key){
        if(root==NULL) return root;

        if(key<root->val){
            root->left=deletenode(root->left,key);
        }
        else if(key>root->val){
            root->right=deletenode(root->right,key);
        }
        else {
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            else if(root->left == NULL || root->right == NULL) {
                TreeNode* child = (root->left != NULL) ? root->left : root->right;
                delete root;
                return child;
            }
            else {
                TreeNode* temp1=inordersuccessor(root->right);
                root->val=temp1->val;
                root->right=deletenode(root->right,temp1->val);
            }
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return deletenode(root,key);
    }
};