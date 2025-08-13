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

    void traversal(TreeNode* root, vector<vector<int>>&ans){
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        
        while(!q.empty()){
            int n=q.size();
            level++;
            vector<int> container;
            for(int i=0; i<n; i++){
                TreeNode* temp=q.front();
                q.pop();
                container.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(level%2==0){
                reverse(container.begin(),container.end());
            }
            
            ans.push_back(container);
            
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        if(root->left==NULL && root->right==NULL){
            ans.push_back({root->val});
            return ans;
        }
        traversal(root,ans);
        return ans;
    }
};