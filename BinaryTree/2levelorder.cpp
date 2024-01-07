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

void levelorder(Node* node){
    
}
int main(){
    // level order traversal
    Node* node = new Node(1);
    node->left=new Node(2);
    node->left->left = new Node(4);
    node->left->right = new Node(5);
    node->right = new Node(3);
    node->right->left = new Node(6);
    node->right->right = new Node(7);

    // level order traversal
    levelorder(node);
    return 0;
}