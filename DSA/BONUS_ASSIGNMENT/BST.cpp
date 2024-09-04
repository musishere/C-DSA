#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

class BinarySearhTree
{
public:
    BstNode *creadeNode(int data)
    {
        BstNode *newNode = new BstNode();
        newNode->data = data;
        newNode->left = newNode->right = nullptr;

        return newNode;
    }

    BstNode *insertion(BstNode *root, int data)
    {
        if (root = nullptr)
            root = creadeNode(data);
        else if (data <= root->data)
            root->left = insertion(root->left, data);
        else
            root->right = insertion(root->right, data);

        return root;
    }

    bool Search(BstNode *root, int data)
    {
        if (root == nullptr)
            return false;

        if (data == root->data)
            return true;

        if (data <= root->data)
            return Search(root->left, data);
        else
            return Search(root->right, data);
    }

    void iterativeInorder(BstNode *root)
    {
        stack<BstNode *> stack;
        BstNode *current = root;

        while (current != nullptr || !stack.empty())
        {
            while (current != nullptr)
            {
                stack.push(current);
                current = current->left;
            }
            current = stack.top();
            stack.pop();
            std::cout << current->data << " ";
            current = current->right;
        }
    }

    void iterativePreorder(BstNode *root)
    {
        if (root == nullptr)
            return;

        std::stack<BstNode *> stack;
        stack.push(root);

        while (!stack.empty())
        {
            BstNode *current = stack.top();
            stack.pop();
            std::cout << current->data << " ";

            if (current->right)
            {
                stack.push(current->right);
            }
            if (current->left)
            {
                stack.push(current->left);
            }
        }
    }

    void iterativePostorder(BstNode *root)
    {
        if (root == nullptr)
            return;

        std::stack<BstNode *> stack1, stack2;
        stack1.push(root);
        BstNode *current;

        while (!stack1.empty())
        {
            current = stack1.top();
            stack1.pop();
            stack2.push(current);

            if (current->left)
            {
                stack1.push(current->left);
            }
            if (current->right)
            {
                stack1.push(current->right);
            }
        }

        while (!stack2.empty())
        {
            current = stack2.top();
            stack2.pop();
            std::cout << current->data << " ";
        }
    }

    int findMinValueInBST(BstNode *root)
    {
        if (root == nullptr)
        {
            cout << ("The tree is empty.");
        }

        BstNode *current = root;
        while (current->left != nullptr)
        {
            current = current->left;
        }

        return current->data;
    };

    int findMaxValueInBST(BstNode *root)
    {
        if (root == nullptr)
        {
            cout << ("The tree is empty.");
        }

        BstNode *current = root;
        while (current->right != nullptr)
        {
            current = current->right;
        }

        return current->data;
    }

    int findDegreeOfNode(BstNode *root, int value)
    {
        if (root == nullptr)
        {
            return -1;
        }

        std::queue<BstNode *> q;
        q.push(root);

        while (!q.empty())
        {
            BstNode *current = q.front();
            q.pop();

            if (current->data == value)
            {
                int degree = 0;
                if (current->left != nullptr)
                {
                    degree++;
                }
                if (current->right != nullptr)
                {
                    degree++;
                }
                return degree;
            }

            if (current->left != nullptr)
            {
                q.push(current->left);
            }
            if (current->right != nullptr)
            {
                q.push(current->right);
            }
        }

        return -1;
    }
};
int main()
{
    BstNode *root = nullptr;
    BinarySearhTree bstTree;

    root = bstTree.insertion(root, 10);
}