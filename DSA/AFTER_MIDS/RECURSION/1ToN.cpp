#include <iostream>
using namespace std;
void headPrint(int n)
{
    // Base Case:
    if (n == 0)
    {
        return;
    }

    // processing
    cout << n << " ";

    // recusrive realtion
    headPrint(n - 1);
}
void tailPrint(int n)
{
    // Base Case :
    if (n == 0)
    {
        return;
    }

    // recusrive realtion
    tailPrint(n - 1);

    // processing
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    headPrint(n);
    cout << endl;
    tailPrint(n);
}