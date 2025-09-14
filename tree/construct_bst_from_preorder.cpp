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

    // TreeNode* insert(TreeNode* root,int val){
    //     if(root==NULL){
    //         return new TreeNode(val);
    //     }
    //     if(val<root->val){
    //         root->left=insert(root->left,val);
    //     }
    //     else root->right=insert(root->right,val);
    //     return root;
    // }

    // TreeNode* constructbst(vector<int>& preorder){
    //     TreeNode* root=NULL;
    //     for(auto it : preorder){
    //         root=insert(root,it);
    //     }
    //     return root;
    // }


    TreeNode* constructbst(vector<int>& preorder,int& index,int lowerbound,int upperbound){
        //base case
        if(index==preorder.size() || preorder[index]<lowerbound || preorder[index]>upperbound){
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[index++]);
        root->left=constructbst(preorder,index,lowerbound,root->val);
        root->right=constructbst(preorder,index,root->val,upperbound);
        return root;
    }
    

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int lowerbound=INT_MIN;
        int upperbound=INT_MAX;
        int index=0;
        return constructbst(preorder,index,lowerbound,upperbound);
    }
};