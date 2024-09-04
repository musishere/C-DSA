//  1 - Factorial
#include <iostream>
using namespace std;
int factorial(int n)
{
    // Base Case:
    if (n == 1 || n == 0)
    {
        return 1;
    }

    // Recursive Relation:
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int fact = factorial(n);
    cout << fact << endl;
}