#include <iostream>
using namespace;
struct student
{
    int rollNumber = 70137345;
    string name = "Mustafa Ahmed";
    int age = 19, marks = 80;
};
int main()
{
    struct student s;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Marks" << s.marks << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
}