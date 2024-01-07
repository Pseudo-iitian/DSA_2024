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
  print(root->left);
  cout<<root->val<<" ";
  print(root->right);
}

void iterativeInorder(Node* root){
  stack<Node*> st;
  Node* node = root;
  while(true){
    if(node!=NULL){
      st.push(node);
      node = node->left;
    }
    else{
      if(st.empty()) break; 
      node = st.top();
      cout<<node->val<<" ";
      st.pop();
      node = node->right;
    }
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

  iterativeInorder(a);
  cout<<endl;
  print(a);
  return 0;
}