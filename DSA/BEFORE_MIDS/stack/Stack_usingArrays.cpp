#include <iostream>
using namespace;
class mystack
{
private:
    int *arr;
    int stack_capacity;
    int arr_size;

public:
    mystack(int g)
    {
        arr = new int[g];
        stack_capacity = g;
        arr_size = 0;
    }
    void push(int x)
    {
        if (arr_size == stack_capacity)
        {
            cout << "Can not Push! stack is Full!";
        }
        arr[arr_size] = x;
        cout << "Element " << x << " Pushed in stack" << endl;
        arr_size++;
    }
    void pop()
    {
        if (arr_size == 0)
        {
            cout << "Can not Pop! Stack is empty" << endl;
        }
        else
        {
            arr_size--;
            cout << "Element poped" << endl;
        }
    }
    int top()
    {
        cout << "Top Value is " << arr[arr_size - 1] << endl;
        return arr[arr_size - 1];
    }
    int size()
    {
        return arr_size;
    }
    void empty()
    {
        if (arr_size == 0)
        {
            cout << "Stack is empty";
        }
    }
    void print()
    {
        cout << "Stack..:" << endl;
        for (int i = arr_size - 1; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    mystack m1(10);
    m1.push(5);
    m1.push(8);
    m1.push(9);
    // m1.pop();
    // m1.top();
    // m1.empty();
    // m1.print();
}