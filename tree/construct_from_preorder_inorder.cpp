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

    int preindex=0;

    TreeNode* constructtree(vector<int>& preorder,vector<int>& inorder,int instart,int inend){
        if(instart>inend) return NULL;
        TreeNode* root=new TreeNode(preorder[preindex++]);
        
        int inindex;
        for(int i=instart; i<=inend; i++){
            if(inorder[i]==root->val){
                inindex=i;
                break;
            }
        }
        root->left=constructtree(preorder,inorder,instart,inindex-1);
        root->right=constructtree(preorder,inorder,inindex+1,inend);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    
        int inend=inorder.size()-1;
        return constructtree(preorder,inorder,0,inend);
        
    }
};