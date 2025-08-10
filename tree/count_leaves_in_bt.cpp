
// User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
  
    // void countl(Node* root, int& count){
    //     if(root==NULL){
    //         return;
    //     }
    //     if(root->left==NULL&&root->right==NULL){
    //         count++;
    //         return;
    //     }
    //     countl(root->left,count);
    //     countl(root->right,count);
    // }
    
    
    int countl(Node* root){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        return (countl(root->left)+countl(root->right));
    }
  
  
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // int count=0;
        // countl(root,count);
        // return count;
        return countl(root);
    }
};