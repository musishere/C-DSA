#include <iostream>
using namespace;
int main()
{
    int *ptr = new int(5);
    char *character = new char('a');
    string *st = new string("Sukunaaaaa");

    cout << *ptr << endl;
    cout << *character << endl;
    cout << *st << endl;
}