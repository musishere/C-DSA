#include <iostream>
using namespace;
struct Node
{
    int data;
    Node *next;
    Node *Head;

    Node()
    {
        Head = NULL;
    }

    void createNode(int value)
    {
        Node *new_node = new Node;
        new_node->data = value;
        new_node->next = NULL;

        if (Head == NULL) // Giving Head to the first node
        {
            Head = new_node;
        }
        else // Connecting nodes
        {
            Node *temp;
            temp = Head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    void displayNode()
    {
        if (Head == NULL)
        {
            cout << " Link List is empty " << endl;
        }
        else
        {
            Node *temp;
            temp = Head;

            while (temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    Node n;
    n.createNode(5);
    n.createNode(7);
    n.displayNode();
}
