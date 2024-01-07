#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int data)
  {
    val = data;
    this->left = NULL;
    this->right = NULL;
  }
};

void print(Node* root){
  if(root==NULL) return;
  print(root->left);
  print(root->right);
  cout<<root->val<<" ";
}
void postOrder(Node* root){
  stack<Node*> st1;
  stack<int> st2;
  st1.push(root);
  while(!st1.empty()){
    Node* node = st1.top();
    st1.pop();
    st2.push(node->val);
    if(node->left!=NULL){
      st1.push(node->left);
    }
    if(node->right!=NULL){
      st1.push(node->right);
    }
  }
  while(!st2.empty()){
    cout<<st2.top()<<" ";
    st2.pop();
  }

}
int main()
{
  // using two stack traversal;
  Node *a = new Node(1);
  Node *b = new Node(2);
  Node *c = new Node(3);
  Node *d = new Node(4);
  Node *e = new Node(5);
  Node *f = new Node(6);
  Node *g = new Node(7);
  a->left = b;
  a->right = g;

  b->left = c;
  b->right = d;

  d->left = e;
  d->right = f;

  postOrder(a);
  cout<<endl;
  print(a);
  return 0;
}