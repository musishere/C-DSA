#include <iostream>
using namespace;
struct Node
{
    int data;
    Node *next;
};
class StackUsingLinkedList
{
private:
    Node *top;

public:
    StackUsingLinkedList()
    {
        top = NULL;
    }

    void push(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (top == NULL)
        {
            top = newNode;
        }
        else
        {
            Node *temp = newNode;
            temp->next = top;
            top = temp;
        }

        cout << newNode->data << " Pushed into stack. " << endl;
    }

    void pop()
    {
        Node *temp = top;
        top = top->next;
        cout << temp->data << " Poped from stack. " << endl;
        delete temp;
    }

    void printStack()
    {
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void peek()
    {
        cout << "Peek value: " << top->data << endl;
    }
};
int main()
{
    StackUsingLinkedList Stack;
    Stack.push(5);
    Stack.push(10);
    Stack.push(15);
    Stack.push(20);
    Stack.push(25);
    Stack.push(30);
    Stack.push(35);
    Stack.push(40);

    cout << endl;
    Stack.pop();
    cout << "Stack: " << endl;
    Stack.printStack();
    Stack.peek();
}