#include <iostream>
using namespace;
class mystack
{
private:
    int *arr;
    int arr_size;
    int max_capacity;

public:
    mystack(int n)
    {
        max_capacity = n;
        arr = new int[n];
        arr_size = 0;
    }
    void push(int x)
    {
        if (arr_size == max_capacity)
        {
            cout << "Stack is Full! can not Push";
        }
        arr[arr_size] = x;
        cout << x << " added to Stack" << endl;
        arr_size++;
    }
    void pop()
    {
        arr_size--;
        cout << arr[arr_size] << " has been Poped" << endl;
    }
    int top()
    {
        cout << arr[arr_size - 1] << " is the top value in stack" << endl;
        return arr[arr_size - 1];
    }
    int size()
    {
        cout << arr_size << " is the size of stack" << endl;
        return arr_size;
    }
    void empty()
    {
        if (arr_size == 0)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Stack is not empty" << endl;
        }
    }
    void printStack()
    {
        for (int i = arr_size - 1; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    mystack m1(5);
    m1.push(5);
    m1.push(6);
    m1.push(7);
    m1.pop();        // 7
    m1.top();        // 6
    m1.printStack(); // 6 5
    m1.empty();
    m1.size();
}