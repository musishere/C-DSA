#include <iostream>
using namespace;
class Node
{

public:
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
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    void insertatHead(int n)
    {
        Node *new_node = new Node;
        new_node->data = n;
        new_node->next = NULL;

        Node *temp = new_node;
        temp->next = head;
        head = temp;
    }

    void insertMidlleNode(int n, int pos)
    {
        Node *temp;
        Node *ptr;

        Node *new_node = new Node;
        new_node->data = n;
        new_node->next = NULL;

        ptr = new_node;
        temp = head;

        while (pos != 1)
        {
            temp = temp->next;
            pos--;
        }

        ptr->next = temp->next;
        temp->next = ptr;
    }

    void displayNode()
    {
        if (head == NULL)
        {
            cout << "link list is empty " << endl;
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
    n.insertNode(1);
    n.insertNode(2);
    n.insertNode(3);
    n.insertatHead(4);
    n.insertatHead(5);
    n.insertMidlleNode(9, 3);

    n.displayNode();
}