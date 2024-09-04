#include <iostream>
using namespace;
int main()
{
    int integer;
    char character;
    string st;
    cout << "Enter an integer:";
    cin >> integer;
    cout << "Enter a character:";
    cin >> character;
    cout << "Enter a string:";
    cin.ignore();
    getline(cin, st);

    int *ptr = new int(integer);
    char *ptr2 = new char(character);
    string *pt3 = new string(st);

    cout << "Integer..:" << *ptr << endl;
    cout << "Character...:" << *ptr2 << endl;
    cout << "String...:" << *pt3 << endl;
}