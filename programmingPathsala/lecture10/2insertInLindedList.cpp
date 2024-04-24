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

void insert(Node* &root, int val,int pos){
  // to reach k position we have to take k-2 hops
  int hops = 0;
  
}

int Mid(Node* root){
  Node* slow = root;
  Node* fast = root;
  // hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama rama hare hare
  while(fast!=NULL && fast->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data;
}

Node* rverseNode(Node* &root){
  Node* prev = NULL;
  Node* curr = root;
  Node* temp = root;
  while(curr!=NULL){
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
  }
  return prev;
}

Node* reverseRecursion(Node* root,Node* curr){
  if(root==NULL) return root;

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

  // insert(head,3,-1);
  // cout<<Mid(head);
  Node* newHead = rverseNode(head);
  print(newHead);
  return 0;
}