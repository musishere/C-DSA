#include <iostream>
using namespace;
class student
{
private:
    int rollNo, phoneNumber;
    string address;

public:
    student(int roll, int phone, string add)
    {
        rollNo = roll;
        phoneNumber = phone;
        address = add;
    }
    void print()
    {
        cout << "Name: " << address << endl;
        cout << "Phone: " << phoneNumber << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};
int main()
{
    student stu(70137345, 03354451205, "john");
    student st(70137345, 123, "Sam");
    st.print();
    cout << endl;
    stu.print();
}