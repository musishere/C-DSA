#include <iostream>
#include <stack>
using namespace;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }

    // insert at Tail
    void insertionAtTail(int val)
    {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;
        new_node->prev = NULL;

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
            new_node->prev = temp;
        }
    }

    // Insert at Head
    void insertAtHead(int val)
    {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;
        new_node->prev = NULL;

        Node *temp = new_node;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    void displayElement()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL";
            cout << endl;
        }
    }

    // Middle element
    int middleElement()
    {
        int count = 0;
        int midPoint;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
        }
        midPoint = count / 2;
        return midPoint;

        // cout << "Mid point: " << midPoint << endl;
    }

    // insert afterMidpoint
    int insertAfterMid(int val)
    {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;
        new_node->prev = NULL;

        int x = middleElement();
        Node *temp = head;
        Node *ptr = new_node;
        while (x > 1)
        {
            temp = temp->next;
            x--;
        }
        ptr->next = temp->next;
        temp->next->prev = ptr;
        temp->next = ptr;
        ptr->prev = temp;
    }

    void countNodes()
    {
        int count = 0;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            cout << "Total Nodes: " << count << endl;
        }
    }

    void DeleteNode(int val)
    {
        // Head delete
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                if (temp == head)
                {
                    // temp = head;
                    head = head->next;
                    head->prev = NULL;
                    delete temp;
                    break;
                }
                else if (temp->next == NULL)
                {
                    temp->prev->next = NULL;
                    delete temp;
                    break;
                }
                else
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                    delete temp;
                    break;
                }
            }
            else
            {
                temp = temp->next;
            }
        }
    }

    void reverseByData()
    {
        Node *temp = head;
        stack<int> st;
        while (temp != NULL)
        {
            st.push(temp->data);
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL)
        {
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }
    }
};
int main()
{
    DoublyLinkedList l1;
    l1.insertionAtTail(1);
    l1.insertionAtTail(2);
    l1.insertionAtTail(3);
    l1.insertionAtTail(4);
    l1.insertionAtTail(5);
    // l1.insertAfterMid(3);
    // l1.insertAtHead();
    l1.displayElement();
    l1.middleElement();
    l1.countNodes();
    l1.DeleteNode(2);
    cout << "After deletion:" << endl;
    l1.displayElement();
    l1.insertAfterMid(10);
    l1.displayElement();
    l1.reverseByData();
    cout << "reverse display:" << endl;
    l1.displayElement();
}