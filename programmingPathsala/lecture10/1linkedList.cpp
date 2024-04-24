#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

class Node{
  public:
    int data;
    Node* next;
    Node(){
      this->data = 0;
      this->next = NULL;
    }
    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};

void print(Node* root){
  Node* head = root;
  while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
}

void printRec(Node* root){
  if(!root) return;
  cout<<root->data<<" ";
  printRec(root->next);
}
int main() {
  fastio
  Node* head = new Node(1);
  Node* b = new Node(2);
  head->next = b;
  Node* c = new Node(3);
  b->next = c;
  Node* d = new Node(4);
  c->next = d;
  Node* e = new Node(5);
  d->next = e;

  printRec(head);


  return 0;
}