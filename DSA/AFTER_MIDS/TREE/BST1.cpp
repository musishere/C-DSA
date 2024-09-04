/*
creation
Insertion
searching
inorder,preorder,postorder
levelorder
deletenode
height
minimun maximum
count nodes
count leaf nodes
ancestors descendants
*/
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
    // Creation:
    BstNode *createNode(int data)
    {
        BstNode *newNode = new BstNode();
        newNode->data = data;
        newNode->left = newNode->right = nullptr;

        return newNode;
    }

    // Insertion:
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

    // Searching:
    bool SearchData(BstNode *root, int data)
    {
        if (root == nullptr)
            return false;
        else if (root->data == data)
            return true;
        else if (data <= root->data)
            return SearchData(root->left, data);
        else
            return SearchData(root->right, data);
    }

    // Traversals:
    void inorderTraversals(BstNode *root)
    {
        if (root == nullptr)
            return;

        inorderTraversals(root->left);
        cout << root->data << " ";
        inorderTraversals(root->left);
    }

    void preorderTraversal(BstNode *root)
    {
        if (root == nullptr)
            return;

        cout << root->data << " ";
        preorderTraversal(root->right);
        preorderTraversal(root->left);
    }

    void postorderTraversal(BstNode *root)
    {
        if (root == nullptr)
            return;

        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }

    // Height:
    int findHeight(BstNode *root)
    {
        if (root == nullptr)
        {
            return -1;
        }

        return max(findHeight(root->left), findHeight(root->right)) + 1;
    }

    // Min Max
    int findMax(BstNode *root)
    {
        if (root == nullptr)
            cout << "Error: Tree is Empty.";

        else if (root->right == nullptr)
            return root->data;

        findMax(root->right);
    }

    int findMin(BstNode *root)
    {
        if (root == nullptr)
            cout << "Error: Tree is empty";

        else if (root->left == nullptr)
            return root->data;

        findMin(root->left);
    }

    // count nodes:
    int countNodes(BstNode *root)
    {
        if (root == nullptr)
            return 0;

        return countNodes(root->left) + countNodes(root->right) + 1;
    }

    int countLeafNodes(BstNode *root)
    {
        if (root == nullptr)
            return 0;

        else if (root->right == nullptr && root->left == nullptr)
            return 1;

        return countLeafNodes(root->left) + countLeafNodes(root->right);
    }

    // Delete Node
    BstNode *DeleteNode(BstNode *root, int data)
    {
        // Base Case:
        if (root == nullptr)
            return root;
        if (root->data == data)
        {
            // 0 child
            if (root->left == nullptr && root->right == nullptr)
            {
                free(root);
                return NULL;
            }
            // 1 child
            if (root->left != nullptr && root->right == nullptr)
            {
                BstNode *temp = root->left;
                free(root);
                return temp;
            }

            if (root->right != nullptr && root->left == nullptr)
            {
                BstNode *temp = root->right;
                free(root);
                return temp;
            }
            // 2 child
            if (root->right != nullptr && root->left != nullptr)
            {
                int min = minvalue(root->right)->data;
                root->data = min;
                root->right = DeleteNode(root->right, min);
                return root;
            }
        }
        else if (data <= root->data)
        {
            root->left = DeleteNode(root->left, data);
            return root;
        }
        else
        {
            root->right = DeleteNode(root->right, data);
            return root;
        }
    }
};

int main()
{
    BstNode *root = nullptr;
    BinarySearchTree Tree;
    root = Tree.Insertion(root, 10);
    root = Tree.Insertion(root, 20);
    root = Tree.Insertion(root, 30);
    root = Tree.Insertion(root, 40);

    int search;
    cout << "Enter value to search: ";
    cin >> search;

    cout << (Tree.SearchData(root, search) ? "Data Found" : "Data not Found");

    cout << "Height of Tree: " << Tree.findHeight(root) << endl;
    cout << "Maximum value of Tree: " << Tree.findMax(root) << endl;
    cout << "Minimum value of Tree: " << Tree.findMin(root) << endl;

    Tree.preorderTraversal(root);
    cout << endl;
    Tree.inorderTraversals(root);
    cout << endl;
    Tree.postorderTraversal(root);
    cout << endl;

    cout << "Total Nodes: " << Tree.countNodes(root) << endl;
    cout << "Leaf Nodes are: " << Tree.countLeafNodes(root) << endl;
}