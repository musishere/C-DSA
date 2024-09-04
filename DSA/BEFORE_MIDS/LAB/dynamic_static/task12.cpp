#include <iostream>
using namespace;
class test
{
public:
    test()
    {
        cout << "Dynamically creating object";
    }
};
int main()
{
    test *ptr = new test;
}
