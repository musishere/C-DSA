#include <iostream>
using namespace std;
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

// Node Creation:
BstNode *createNode(int data)
{
    // Creating
    BstNode *newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;

    return newNode;
}

// Insertion in Tree:
BstNode *InsertInTree(BstNode *root, int data)
{
    if (root == nullptr)
    {
        root = createNode(data);
    }
    else if (data <= root->data)
    {
        root->left = InsertInTree(root->left, data);
    }
    else
    {
        root->right = InsertInTree(root->right, data);
    }

    return root;
}

bool SearchData(BstNode *root, int data)
{
    if (root == nullptr)
    {
        return false;
    }
    else if (root->data == data)
    {
        return true;
    }
    else if (data <= root->data)
    {
        return SearchData(root->left, data);
    }
    else
    {
        return SearchData(root->right, data);
    }
}

int main()
{
    BstNode *root = nullptr;

    // Insertion:
    root = InsertInTree(root, 10);
    root = InsertInTree(root, 15);
    root = InsertInTree(root, 15);

    // Searching:
    int searchNumber;
    cout << "Enter Number to Search: ";
    cin >> searchNumber;

    if (SearchData(root, searchNumber) == true)
    {
        cout << "Data Found";
    }
    else
    {
        cout << "Data not Found";
    }
}