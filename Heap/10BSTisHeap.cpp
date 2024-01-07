#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* left;
    Node* right;
    Node(){}
    Node(int data){
      this->data = data;
      this->left = NULL;
      this->right= NULL;
    }
};

void print(Node* root){
  if(root==NULL) return ;
  // inorder 
  // left root right
  cout<<root->data<<" ";
  print(root->left);
  print(root->right);
}

void Inordercreation(Node* root, queue<int> &ans){
  if(root==NULL) return;
  Inordercreation(root->left,ans);
  ans.push(root->data);
  Inordercreation(root->right,ans);
}

void convertToHeap(Node* &root,queue<int> &inorder){
  // insert the post order traversal so 
  if(root==NULL) return;
  convertToHeap(root->left,inorder);
  convertToHeap(root->right,inorder);
  root->data = inorder.front();
  inorder.pop();
}

void Converting(Node* &root){
  int largest = 0;
  if(root->left==NULL && root->right==NULL) return;
  Converting(root->left);
  Converting(root->right);
  if(root->data < root->right){
    largest = root->right->data;
  }
  int temp = root->data;
  root->data = largest;
  root->right->data = temp;
}
int main(){
  Node* a = new Node(100);
  Node* b = new Node(50);
  Node* c = new Node(150);
  a->left = b;
  a->right = c;
  Node* d = new Node(20);
  Node* e = new Node(60);
  b->left = d;
  b->right = e;
  Node* f = new Node(11);
  Node* g = new Node(30);
  d->left = f;
  d->right = g;

  Node* h = new Node(110);
  Node* i = new Node(200);
  c->left = h;
  c->right = i;

  queue<int> inorder;
  // copy the inorder traversal 
  // Inordercreation(a,inorder);
  // convertToHeap(a,inorder);
  Converting(a);
  print(a);
  return 0;
}