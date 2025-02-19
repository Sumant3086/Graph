#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
void preOrder(Node* root){
    if(!root)return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(!root)return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}
void postOrder(Node* root){
    if(!root)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);
    cout<<"DFS: ";
    preOrder(root);
    cout<<endl;
    return 0;
}