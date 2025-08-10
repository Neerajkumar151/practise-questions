/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    // void sumbt(Node* root, int&sum){
    //     if(root==NULL) return;
    //     sum+=root->data;
    //     sumbt(root->left,sum);
    //     sumbt(root->right,sum);
    // }
    
    int sumbt(Node* root){
        if(root==NULL) return 0;
        return (root->data + sumbt(root->left) + sumbt(root->right));
        
    }
  
    int sumBT(Node* root) {
        
        // int sum=0;
        // sumbt(root,sum);
        // return sum;
        
        return sumbt(root);
    }
};