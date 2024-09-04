// Write a recursive function to delete an element from a doubly linked list.cpp
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
};
class LinkedList
{
private:
    Node *head;
    Node *temp = head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insertion(int n)
    {
        Node *newNode = new Node;
        newNode->data = n;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void deleteNode(int n)
    {
        // Base case
        if (head == nullptr)
        {
            return;
        }

        if (temp->data == n)
        {
            if (temp == head)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
            }
            else if (temp->next == nullptr)
            {

                temp->prev->next = nullptr;
                temp->prev = nullptr;
                delete temp;
            }
            else
            {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
            }
        }

        // recursive relation
        temp = temp->next;
        deleteNode(n);
    }
};
int main()
{
    LinkedList List;
    List.insertion(10);
    List.insertion(20);
    List.deleteNode(10);
}