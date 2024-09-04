#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode *createNode(int data)
{
    BstNode *newNode = new BstNode();
    newNode->data = data;
    newNode->right = newNode->left = nullptr;

    return newNode;
}

BstNode *Insertion(BstNode *root, int data)
{
    if (root == nullptr)
    {
        root = createNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insertion(root->left, data);
    }
    else
    {
        root->right = Insertion(root->right, data);
    }

    return root;
}

int FindMin(BstNode *root)
{
    if (root == nullptr)
    {
        cout << "Error: Tree is empty.";
        return -1;
    }
    else if (root->left == nullptr)
    {
        return root->data;
    }
    FindMin(root->left);
}

int FindMax(BstNode *root)
{
    if (root == nullptr)
    {
        cout << "Error: Tree is empty.";
        return -1;
    }
    else if (root->right == nullptr)
    {
        return root->data;
    }

    FindMax(root->right);
}

int FindHeight(BstNode *root)
{
    if (root == nullptr)
    {
        return -1;
    }

    return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}

void PreOrder(BstNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void Inorder(BstNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void PostOrder(BstNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    BstNode *root = nullptr;

    root = Insertion(root, 10);
    root = Insertion(root, 20);
    root = Insertion(root, 30);
    root = Insertion(root, 40);
    root = Insertion(root, 50);
    root = Insertion(root, 60);

    cout << "Minimun Value is: " << FindMin(root) << endl;
    cout << "Maximum Value is: " << FindMax(root) << endl;

    cout << "Height  is: " << FindHeight(root) << endl;

    PreOrder(root);
    cout << endl;
    Inorder(root);
    cout << endl;
    PostOrder(root);
}