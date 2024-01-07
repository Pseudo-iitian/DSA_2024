#include<iostream>
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

void preorder(Node* head){
    if(head==NULL) return;
    // r l right
    cout<<head->data<<" ";
    preorder(head->left);
    preorder(head->right);
}

void inorder(Node* node){
    if(node == NULL) return;
    // left root right
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(Node* node){
    if(node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

int main(){
    Node* newNode = new Node(1);
    newNode->left= new Node(2);
    newNode->right = new Node(3);
    newNode->left->left=new Node(4);
    newNode->left->right= new Node(5);
    newNode->left->right->left = new Node(6);
    newNode->right->left = new Node(7);
    newNode->right->right = new Node(8);
    newNode->right->right->left = new Node(9);
    newNode->right->right->right = new Node(10);
    preorder(newNode);
    cout<<endl;
    inorder(newNode);
    cout<<endl;
    postorder(newNode);
    return 0;
}