#include <iostream>
using namespace;
struct Node
{
    int data;
    Node *next;
    Node *head;

    Node()
    {
        head = NULL;
    }

    void insertNode(int n)
    {

        Node *new_node = new Node;
        new_node->data = n;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            Node *temp;
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    void displayNode()
    {
        if (head == NULL)
        {
            cout << " Link List is empty " << endl;
        }
        else
        {
            Node *temp;
            temp = head;

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
    n.insertNode(5);
    n.insertNode(7);
    n.displayNode();
}