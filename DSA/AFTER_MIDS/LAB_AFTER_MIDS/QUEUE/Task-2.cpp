#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty()
    {
        if (rear == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueu(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if (isEmpty())
        {
            rear = newNode;
            front = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "can not pop queue is full";
        }
        else
        {
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    // Task 2:
    void displayNode()
    {
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Task 3:
    void sum()
    {
        Node *temp = front;
        int sum = 0;
        while (temp != NULL)
        {
            sum = sum + temp->data;
            temp = temp->next;
        }
        cout << sum << endl;
    }
};
int main()
{
    Queue queue;
    queue.enqueu(10);
    queue.enqueu(15);
    queue.displayNode();

    queue.dequeue();

    queue.sum();
}