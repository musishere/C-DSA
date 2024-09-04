#include <iostream>
using namespace;
class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[this->size];
        top = -1;
    }

    // isEmpty
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // isFull
    bool isFull()
    {
        if (top == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // push
    void Push(int value)
    {
        if (isFull())
        {
            cout << "Stack OverFlowed. " << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " Pushed into Stack. " << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underFlowed. Nothing to pop. " << endl;
        }
        else
        {
            cout << arr[top] << " Poped from stack " << endl;
            top--;
        }
    }

    int peek()
    {
        return arr[top];
    }
};
int main()
{
    Stack st(5);
    st.Push(5);
    st.Push(10);
    cout << endl;
    st.pop();
    cout << "Peek value is: " << st.peek() << endl;
}