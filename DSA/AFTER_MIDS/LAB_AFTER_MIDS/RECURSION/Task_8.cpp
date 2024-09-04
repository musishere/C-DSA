// Write a recursive function that searches an element in a singly linked list.Return True if the
// number is found,
// False otherwise.The function should take the number to be searched as a
// parameter.
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insert(int n)
    {
        Node *newNode = new Node;
        newNode->data = n;
        newNode->next = nullptr;

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
        }
    }

    bool recursiveFoundValue(int n)
    {
        Node *temp = head;
        if (head == nullptr)
        {
            return false;
        }

        if (temp->data == n)
        {
            return true;
        }

        temp = temp->next;
        return recursiveFoundValue(n);
    }
};
int main()
{
    LinkedList List;
    List.insert(5);
    List.insert(10);

    int n;
    cout << "Enter value: ";
    cin >> n;
    if (List.recursiveFoundValue(n))
    {
        cout << "Value found";
    }
    else
    {
        cout << "Not Found";
    }
}