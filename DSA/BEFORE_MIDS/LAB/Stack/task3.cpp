#include <iostream>
using namespace;
class Stack
{
private:
    char *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new char[this->size];
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
    void Push(char value)
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

    char peek()
    {
        return arr[top];
    }
};
int main()
{
    Stack st(15);
    st.Push('a');
    st.Push('b');
    st.Push('c');
    st.Push('d');
    st.Push('e');
    st.Push('f');
    st.Push('g');
    st.Push('h');
    st.Push('i');
    st.Push('j');
    st.Push('k');
    st.Push('l');
    st.Push('m');
    st.Push('n');
    cout << endl;
    st.pop();
    cout << "Peek value is: " << st.peek() << endl;
}