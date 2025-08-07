// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        stack<Node*> container;
        vector<int> ans;
        container.push(root);
        if(root==NULL) return ans;
        
        while(!container.empty()){
            Node* temp=container.top();
            container.pop();
            ans.push_back(temp->data);
            if(temp->right) container.push(temp->right);
            if(temp->left) container.push(temp->left);
            
        }
        return ans;
    }
};