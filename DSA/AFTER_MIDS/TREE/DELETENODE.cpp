#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

class BinarySearchTree
{
public:
    BstNode *createNode(int data)
    {
        BstNode *newNode = new BstNode();
        newNode->data = data;
        newNode->left = newNode->right = nullptr;

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

    BstNode *DeleteNode(BstNode *root, int data)
    {
        if (root == nullptr)
        {
            return NULL;
        }
        else if (data <= root->data)
        {
            root->left = DeleteNode(root->left, data);
        }
        else if (data >= root->data)
        {
            root->right = DeleteNode(root->right, data);
        }
        else
        {
            // case1:
            if (root->left == nullptr && root->right == nullptr)
            {
                delete root;
                root = NULL;
                return root;
            }
            else if (root->left == nullptr)
            {
                BstNode *temp = root;
                root = root->right;
                delete temp;
            }
            else if (root->left == nullptr)
            {

                BstNode *temp = root;
                root = root->left;
                delete temp;
            }
            else
            {
                BstNode *temp = Findmin(root->right);
                root->data = temp->data;
                root->right = DeleteNode(root->right, temp->data);
            }
        }

        return root;
    }

    int Findmin(BstNode *root)
    {
        if (root == nullptr)
        {
            cout << "Error: Tree is Empty.";
        }
        else if (root->left == nullptr)
        {
            return root->data;
        }

        return Findmin(root->left);
    }
};

int main()
{
    BstNode *root = nullptr;
    BinarySearchTree Tree;
    Tree.Insertion(root, 5);
    Tree.Insertion(root, 10);
    Tree.Insertion(root, 15);
}