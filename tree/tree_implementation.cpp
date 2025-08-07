# include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        right=left=NULL;
    }
};



int main(){
    int x;
    cout<<"Enter the Root Node:- ";
    cin>>x;
    Node* root=new Node(x);
    int first;
    int second;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<"enter the left child of "<<temp->data<<" ";
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }

        cout<<"enter the right child of "<<temp->data<<" ";
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }

    return 0;
}
