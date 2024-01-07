#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    Node* left;
    Node* right;
    int data;
    Node(){
        this->data = 0;
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

bool isHeap(int arr[],int size){
  queue<int> q;
  q.push(arr[1]);
  cout<<q.front()<<endl;
  for(int i=2;i<=size;++i){
    int top = q.front();
    q.pop();
    int left = 2*(i-1);
    if(left <= size){
      q.push(arr[left]);
      if(top<arr[left]) return false;
    }
    int right = 2*(i-1)+1;
    if(right<=size){
      q.push(arr[right]);
      if(top < arr[right]) return false;
    }
  }
  return true;
}

pair<bool,int> kyaHeap(Node* root){
  if(root==NULL) return {true,INT_MIN};
  if(root->left == NULL && root->right == NULL){
    return {true,root->data};
  }
  pair<bool,int> leftAns = kyaHeap(root->left);
  pair<bool,int> rightAns = kyaHeap(root->right);

  if(leftAns.first == true && rightAns.first == true && root->data > leftAns.second && root->data > rightAns.second){
    return {true,root->data};
  }
  return {false,-1};
}   

int main(){
  // 1 base indexing
  // int arr[] = {0,10,5,11,1,3,2};
  // int size = 6;
  // cout<<isHeap(arr,size);

  // 2 using recursion 
  Node* root = new Node(100);
  Node* a = new Node(90);
  Node* b = new Node(110);
  root->left = a;
  root->right = b;
  Node* c = new Node(10);
  Node* d = new Node(20);
  a->left = c;
  a->right = d;
  Node* e = new Node(50);
  Node* f = new Node(60);
  b->left = e;
  b->right = f;
  Node* g = new Node(2);
  Node* h = new Node(4);
  c->left = g;
  c->right = h;

  cout<<kyaHeap(root).first;
  return 0;
}