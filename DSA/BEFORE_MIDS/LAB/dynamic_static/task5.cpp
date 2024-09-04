#include <iostream>
using namespace;
class Rectangle
{
private:
    int area;
    int length = 3;
    int breadt = 5;

public:
    void Area()
    {
        int area = length * breadt;
        cout << "Area..: " << area << endl;
    }
};
int main()
{
    Rectangle r;
    r.Area();
}