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

    // inserting nodes:
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

    // display node:
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

    // count node:
    void countNode()
    {
        int count = 0;
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
                count++;
                temp = temp->next;
            }
        }
        cout << "TotaL nodes: " << count << endl;
    }

    // Sum of nodes:
    void sumNode()
    {
        int sum = 0;
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
                sum += temp->data;
                temp = temp->next;
            }
        }
        cout << "Sum of nodes: " << sum << endl;
    }

    // specific number:
    void specificNode(int n)
    {
        int a = 0;
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
                if (a == n)
                {
                    cout << "Number found at " << n << endl;
                }
                a++;
                temp = temp->next;
            }
        }
    }
    // searching:
    void searchingData(int x)
    {
        Node *temp;
        temp = head;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->data == x)
            {
                found = true;
            }
            temp = temp->next;
        }
        if (found == true)
        {
            cout << x << " available" << endl;
        }
        else
        {
            cout << x << " not availble " << endl;
        }
    }
    // deleting node:
    void deleteNode(int n)
    {
        if (head == NULL)
        {
            cout << "Linked List is empty. Nothing to delete";
        }
        else
        {
            // if user wants to delete first node.
            if (head->data == n)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
            }
            else
            {
                Node *temp = head->next;
                Node *prev = head;
                while (temp != NULL)
                {
                    if (temp->data == n)
                    {
                        prev->next = temp->next;
                        delete temp;
                        break;
                    }
                    prev = temp;
                    temp = temp->next;
                }
            }
        }
    }
};

int main()
{

    Node n1;
    n1.insertNode(1);

    n1.insertNode(2);

    n1.insertNode(3);

    n1.insertNode(4);

    n1.insertNode(5);

    n1.displayNode();

    n1.countNode();

    n1.sumNode();

    n1.specificNode(3);

    n1.searchingData(15);

    n1.deleteNode(13);

    cout << "After deleting node " << endl;
    n1.displayNode();
}