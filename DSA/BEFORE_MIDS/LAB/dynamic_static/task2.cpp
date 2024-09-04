#include <iostream>
using namespace;
struct student
{
    int rollNumber;
    int age;
    string name;
};
int main()
{
    struct student s;
    cout << "Enter information: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter name: " << endl;
        getline(cin, s.name);
        cout << "Enter age: " << endl;
        cin >> s.age;
        cout << "Enter roll number: ";
        cin >> s.rollNumber;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Name..:" << s.name << endl;
        cout << "Age..:" << s.age << endl;
        cout << "Roll number..:" << s.rollNumber << endl;
    }
}