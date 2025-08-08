// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        stack<Node*> st;
        vector<int> ans;
        if(root==NULL) return ans;
        Node* node=root;
        
        while(true){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else {
                if(st.empty()) break;
                node=st.top();
                st.pop();
                ans.push_back(node->data);
                node=node->right;
            }
        }
        return ans;
        
    }
};