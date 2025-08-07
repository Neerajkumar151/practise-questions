// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        stack<Node*> container;
        vector<int> ans;
        container.push(node);
        if(node==NULL) return ans;
        
        while(!container.empty()){
            Node* temp=container.top();
            container.pop();
            ans.push_back(temp->data);
            if(temp->left) container.push(temp->left);
            if(temp->right) container.push(temp->right);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};