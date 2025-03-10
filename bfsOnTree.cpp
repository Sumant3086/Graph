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
void bfs(Node* root){
    if(!root)return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left)q.push(curr->left);
        if(curr->right)q.push(curr->right);
    }
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);
    cout<<"BFS Level Order Traversal: ";
    bfs(root);
    cout<<endl;
    return 0;
}