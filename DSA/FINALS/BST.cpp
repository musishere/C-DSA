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
        newNode->right = newNode->left = nullptr;

        return newNode;
    }

    BstNode *insertion(BstNode *root, int data)
    {
        if (root == nullptr)
        {
            root = createNode(data);
        }
        else if (data <= root->data)
        {
            root->left = insertion(root->left, data);
        }
        else
        {
            root->right = insertion(root->right, data);
        }

        return root;
    }

    void preOrder(BstNode *root)
    {
        if (root == nullptr)
        {
            return;
        }

        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    void inOrder(BstNode *root)
    {
        if (root == nullptr)
            return;

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    void postOrder(BstNode *root)
    {
        if (root == nullptr)
            return;

        postOrder(root->right);
        postOrder(root->left);
        cout << root->data << " ";
    }

    bool searchData(BstNode *root, int data)
    {
        if (root == nullptr)
            return false;
        else if (root->data == data)
            return true;
        else if (data <= root->data)
            return searchData(root->left, data);
        else
            return searchData(root->right, data);
    }

    int findmin(BstNode *root)
    {
        if (root == nullptr)
            cout << "Tree is empty.";
        else if (root->left == nullptr)
            return root->data;
        else
            return findmin(root->left);
    }

    int findmax(BstNode *root)
    {
        if (root == nullptr)
            cout << "Tree is empty.";
        else if (root->right == nullptr)
            return root->data;
        else
            return findmin(root->right);
    }

    int findDegree(BstNode *root, int data)
    {
        // Base case
        if (root == nullptr)
            return;
        else if (data == root->data)
        {
            int degree = 0;
            if (root->right != nullptr)
                degree++;
            if (root->left != nullptr)
                degree++;

            return degree;
        }
        else if (data <= root->data)
        {
            return findDegree(root->left, data);
        }
        else
        {
            return findDegree(root->right, data);
        }
    }

    int countLeafNodes(BstNode *root)
    {
        if (root == nullptr)
            return 0;

        if (root->right == nullptr && root->left == nullptr)
            return 1;

        return countLeafNodes(root->left) + countLeafNodes(root->right);
    }

    int countNodes(BstNode *root)
    {
        if (root == nullptr)
            return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    BstNode *deleteNode(BstNode *root, int data)
    {
        if (root == nullptr)
            return root;
        else if (data <= root->data)
            root->left = deleteNode(root->left, data);
        else if (data > root->data)
            root->right = deleteNode(root->right, data);
        else
        {
            // case 1: left null
            if (root->left == nullptr)
            {
                BstNode *temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == nullptr)
            {
                BstNode *temp = root->left;
                delete root;
                return temp;
            }
            else if (root->right == nullptr && root->left == nullptr)
            {
                return nullptr;
            }
            else
            {
                BstNode *temp = findmin(root->right);
                root->data = temp->data;
                root->right = deleteNode(root->right, temp->data);
            }
        }
        return root;
    }

    int height(BstNode *root)
    {
        if (root == nullptr)
        {
            return -1;
        }

        int left = height(root->left);
        int right = height(root->right);

        return max(left, right) + 1;
    }

    int depth(BstNode *root, int data, int depth = 0)
    {
        if (root == nullptr)
            return;

        if (data == root->data)
        {
            return depth;
        }
        else if (data <= root->data)
        {
            return depth(root->left, data, depth + 1);
        }
        else
        {
            return depth(root->right, data, depth + 1);
        }
    }
};

int main()
{
    BstNode *root = nullptr;
    BinarySearchTree Tree;
    root = Tree.insertion(root, 10);
    root = Tree.insertion(root, 20);
    root = Tree.insertion(root, 5);
}