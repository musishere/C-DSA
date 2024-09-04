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

    void PreOrderTraversal(BstNode *root)
    {
        if (root == nullptr)
        {
            return;
        }

        cout << root->data << " ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }

    void InorderTraversal(BstNode *root)
    {
        if (root == nullptr)
        {
            return;
        }

        InorderTraversal(root->left);
        cout << root->data << " ";
        InorderTraversal(root->right);
    }

    void PostOrderTraversal(BstNode *root)
    {
        if (root == nullptr)
        {
            return;
        }

        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        cout << root->data << " ";
    }

    int FindMax(BstNode *root)
    {
        if (root == nullptr)
        {
            cout << "Error: Tree is Empty.";
        }
        else if (root->right == nullptr)
        {
            return root->data;
        }

        return FindMax(root->right);
    }

    int FindMin(BstNode *root)
    {
        if (root == nullptr)
        {
            cout << "Error: Tree is Empty.";
        }
        else if (root->left == nullptr)
        {
            return root->data;
        }

        return FindMin(root->left);
    }

    int FindDegree(BstNode *root, int data)
    {
        if (root == nullptr)
        {
            cout << "Error: Tree is empty.";
        }
        if (root->data == data)
        {
            int degree = 0;
            if (root->right != nullptr)
            {
                degree++;
            }
            if (root->left != nullptr)
            {
                degree++;
            }

            return degree;
        }
        if (data <= root->data)
        {
            FindDegree(root->left, data);
        }
        else
        {
            FindDegree(root->right, data);
        }
    }

    int countLeafNodes(BstNode *root)
    {
        if (root == nullptr)
            return 0;
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        return countLeafNodes(root->left) + countLeafNodes(root->right);
    }

    int countNodes(BstNode *root)
    {
        if (root == nullptr)
            return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

int main()
{
    BstNode *root = nullptr;
    BinarySearchTree Tree;

    // Insertion:
    root = Tree.Insertion(root, 10);
    root = Tree.Insertion(root, 20);
    root = Tree.Insertion(root, 30);

    // Searching:
    int searchData;
    cout << "Enter Data To Search: ";
    cin >> searchData;
    if (Tree.SearchData(root, searchData))
    {
        cout << "Data Found " << endl;
    }
    else
    {
        cout << "Data not Found " << endl;
    }

    // BFS:
    cout << "Pre-order traversal: ";
    Tree.PreOrderTraversal(root);
    cout << endl
         << "In-order traversal: ";
    Tree.InorderTraversal(root);
    cout << endl
         << "Post-order traversal: ";
    Tree.PostOrderTraversal(root);
    cout << endl;

    // Min Max
    cout << "MAX VALUE: " << Tree.FindMax(root) << endl;
    cout << "MIN VALUE: " << Tree.FindMin(root) << endl;

    // Degree:
    int degreeData;
    cout << "Enter Degree Data: ";
    cin >> degreeData;
    cout << "Degree of Node: " << Tree.FindDegree(root, degreeData) << endl;

    // Leaf Node:
    cout << "Leaf Nodes: " << Tree.countLeafNodes(root) << endl;

    // CountNode:
    cout << "Total Nodes: " << Tree.countNodes(root) << endl;

    return 0;
}
