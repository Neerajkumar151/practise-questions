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
class BSTIterator {
public:
stack<TreeNode*> temp;
    BSTIterator(TreeNode* root) {
        TreeNode* ref=root;
        while(ref){
            temp.push(ref);
            ref=ref->left;
        }
    }
    
    int next() {
        TreeNode* nextelement=temp.top();
        temp.pop();
        if(nextelement->right){
            TreeNode* ref=nextelement->right;
            while(ref){
                temp.push(ref);
                ref=ref->left;
            }
        }
        return nextelement->val;
    }
    
    bool hasNext() {
        return !temp.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */