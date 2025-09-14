/*struct Node
{
    int data;
    Node *left, *right;
};*/

Node* constructbst(int post[],int size,int & index,int lowerbound,int upperbound){
    //base case
        if(index<0 || post[index]<lowerbound || post[index]>upperbound){
            return NULL;
        }
        Node* root=new Node(post[index--]);
        root->right=constructbst(post,size,index,root->data,upperbound);
        root->left=constructbst(post,size,index,lowerbound,root->data);
        return root;
}

Node *constructTree(int post[], int size) {
    int index=size-1;
    return constructbst(post,size,index,INT_MIN,INT_MAX);
    
}