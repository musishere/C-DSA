// Create a stack object
// Check the stack empty or not?
// Insert element  :
// 4, 5, 6, 7
// Pop an element from stack 4
// Set Top to the 5
#include <iostream>
using namespace;
class stack
{
    int *arr;
    int arr_size;
    int capacity;

public:
    stack(int x)
    {
        capacity = x;
        arr_size = 0;
        arr = new int[x];
    }
    void push(int a)
    {
        if (arr_size == capacity)
        {
            cout << "Stack is full! can not Push" << endl;
        }
        else
        {
            arr[arr_size] = a;
            cout << a << " pushed" << endl;
            arr_size++;
        }
    }
    void pop()
    {
        cout << "element  poped" << endl;
        arr_size--;
    }
    void empty()
    {
        if (arr_size == -1)
        {
            cout << "Stack is Empty";
        }
        else
        {
            cout << "stack is not empty";
        }
    }
    void top()
    {
        cout << "top value:" << arr[arr_size - 1] << endl;
    }
};
int main()
{
    stack s(5);
    s.push(7);
    s.push(5);
    s.push(6);
    s.push(4);
    s.pop();
    s.top();
    s.pop();

    s.top();
    s.pop();
    s.top();
    s.empty();
}