#include <iostream>
using namespace;
class Area
{
private:
    int length, breadth, area;

public:
    void setDim()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void getArea()
    {
        area = length * breadth;
        cout << "Area...:" << area << endl;
    }
};
int main()
{
    Area a;
    a.setDim();
    a.getArea();
}