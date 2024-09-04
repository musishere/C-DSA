#include <iostream>
using namespace std;

class queues
{
private:
    int size;
    int rear;
    int front;
    int *arr;

public:
    Queue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        int *arr = new int[size];
    }

    bool isfull()
    {
        if (rear == size - 1) // rear == index(akhri walay)
            return true;
        else
            return false;
    }

    bool isempty()
    {
        if (rear == -1)
            return true;
        else
            return false;
    }

    void enqueue(int data)
    {
        if (isfull())
            cout << "Queue is full";

        if (isempty())
        {
            rear++;
            front++;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void dequeue()
    {
        if (isempty())
        {
            cout << "Empty";
        }
        else if (front > rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }

    void frontPrint()
    {
        cout << "Front Value is: " << front << endl;
    }

    void rearPrint()
    {
        cout << "Rear Value is: " << rear << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int sum()
    {
        if (isEmpty())
        {
            return 0; // Return 0 if the queue is empty
        }
        int total = 0;
        for (int i = front; i <= rear; i++)
        {
            total += arr[i];
        }
        return total;
    }

    void reverseDisplay()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements in reverse: ";
        for (int i = rear; i >= front; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};