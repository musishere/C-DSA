#include <iostream>
using namespace;
class Trianle
{
private:
    int area, perimeter;
    int length = 3;
    int breadth = 5;
    int shread = 4;

public:
    void Area()
    {
        area = length * breadth;
        cout << "Area: " << area << endl;
    }

    void Perimeter()
    {
        perimeter = length + breadth + shread;
        cout << "Perimeter:" << perimeter << endl;
    }
};
int main()
{
    Trianle t;
    t.Area();
    t.Perimeter();
}