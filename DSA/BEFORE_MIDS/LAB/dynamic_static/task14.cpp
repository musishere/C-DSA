#include <iostream>
using namespace;
void swapByValue(int a, int b)
{
    cout << "Before swap: " << a << " " << b << endl;
    swap(a, b);
    cout << "After Swap: " << a << " " << b << endl;
}
void swapByrefrence(int *a, int *b)
{
    cout << "Before swap: " << *a << " " << *b << endl;
    swap(a, b);
    cout << "After swap :" << *a << " " << *b << endl;
}
int main()
{
    swapByValue(2, 3);
    cout << endl;
    /*
    int *ptr = &c;
    int *ptr2 = &d;
    */
    int c = 10;
    int d = 20;
    swapByrefrence(&c, &d);
}