#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->right = newNode->left = nullptr;

    return newNode;
}

int main()
{
    // Root Node
    Node *root = createNode(1);

    // Child Nodes
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
}