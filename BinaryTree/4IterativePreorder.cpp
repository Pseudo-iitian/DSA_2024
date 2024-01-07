#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int val;
  Node* left;
  Node* right;
  Node(int val){
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

void print(Node* root){
  if(root==NULL) return;
  cout<<root->val<<" ";
  print(root->left);
  print(root->right);
}
void iterativePreorder(Node* root){
  stack<Node*> st;
  st.push(root);
  while(!st.empty()){
    Node* newNode = st.top();
    if(newNode->left!=NULL) st.push(newNode->left);
    cout<<newNode->val<<" ";
    st.pop();
    if(newNode->right!=NULL) st.push(newNode->right);
  }
}
int main(){
  Node* a = new Node(1);
  Node* b = new Node(2);
  Node* c = new Node(3);
  Node* d = new Node(4);
  Node* e = new Node(5);
  Node* f = new Node(6);
  Node* g = new Node(7);
  a->left = b;
  a->right = g;

  b->left=c;
  b->right=d;

  d->left=e;
  d->right=f;

  iterativePreorder(a);
  // print(a);
  return 0;
}