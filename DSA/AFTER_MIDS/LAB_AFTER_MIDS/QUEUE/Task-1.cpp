#include <iostream>
using namespace std;
// Task 1:
class Queue
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
        arr = new int[size];
        rear = -1;
        front = -1;
    }

    bool isFull()
    {
        if (rear == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEmpty()
    {
        if (rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Can not insert queue is full";
        }
        else if (isEmpty())
        {
            rear++;
            front++;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Can not delete queue is already empty";
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

    // Task 2:
    void displayQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty";
        }
        else if (front > rear)
        {

            front = -1;
            rear = -1;
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    // Task 3:
    void sumOfQueue()
    {
        int sum = 0;
        for (int i = 0; i <= rear; i++)
        {
            sum = sum + arr[i];
        }
        cout << sum << endl;
    }

    // Task 4:
    void displayreverse()
    {
        for (int i = rear; i >= front; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue()
    {
        delete[] arr;
    }
};
int main()
{
    Queue queue(10);

    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);
    queue.enqueue(20);
    queue.enqueue(25);
    queue.enqueue(30);
    queue.enqueue(35);
    queue.enqueue(40);

    queue.rearPrint();
    queue.frontPrint();
    queue.displayQueue();
    queue.sumOfQueue();
    queue.displayreverse();
}