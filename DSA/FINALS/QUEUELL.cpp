#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class queueuueue
{
private:
    Node *front;
    Node *rear;

public:
    queueuueue()
    {
        front = nullptr;
        rear = nullptr;
    }

    bool isempty()
    {
        if (rear == nullptr)
            return true;
        else
            return false;
    }

    void enqueuue(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (isempty())
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }
};