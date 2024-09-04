#include <iostream>
using namespace;
struct TEST
{
    int data;
    void input()
    {
        cout << "Enter data: ";
        cin >> data;
        cout << data << endl;
    }
};
int main()
{
    TEST *ptr = new TEST;
    ptr->input();
    ptr->data;
}