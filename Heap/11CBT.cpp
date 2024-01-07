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

void calculateDataPoints(Node* root,int &data){
  if(root==NULL) return ;
  // inorder 
  // left root right
  data++;
  calculateDataPoints(root->left,data);
  calculateDataPoints(root->right,data);
}

bool isCBT(Node* root,int &count,int data){
  queue<Node* > q;
  q.push(root);
  count++;
  while(!q.empty()){
    Node* node = q.front();
    q.pop();
    if(node->left!=NULL){
      q.push(node->left);
    }
    if(node->right!=NULL){
      q.push(node->right);
    }
    if(node->left!=NULL || node->right!=NULL) count+=2;
    if(count>data) return false;
  }
  return true;
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
  // d->right =g;
  Node* h = new Node(110);
  h->right = g;
  Node* i = new Node(200);
  // i->left = g;
  c->left = h;
  c->right = i;
  // assuming prblem hai
  int data = 0;
  calculateDataPoints(a,data);
  int count = 0;
  cout<<isCBT(a,count,data)<<endl;
  return 0;
}