#include <iostream>
using namespace;
class student
{
private:
    string name;
    int roll_no;

public:
    student(string n, int rollno)
    {
        name = n;
        roll_no = rollno;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll_no << endl;
    }
};
int main()
{
    student st("John", 2);
    st.print();
}