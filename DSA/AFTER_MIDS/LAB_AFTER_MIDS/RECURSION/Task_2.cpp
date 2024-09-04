// a. Write a recursive function to print values from N to 1 e.g. if N =5, then the output should be :
// 5, 4, 3, 2, 1. N should be a parameter for this function.
// b. Write a recursive function to print values from 1 to N e.g. if N =5, then the output should be :
// 1,2,3,4,5. N should be a parameter for this function.
#include <iostream>
using namespace std;
void tailPrint(int n)
{
    // step_1: base case
    if (n == 0)
    {
        return;
    }

    // step_2: processing
    cout << n << " ";

    // step_3: recursive relation
    tailPrint(n - 1);
}

void headPrint(int n)
{
    // step_1: base case
    if (n == 0)
    {
        return;
    }

    // step_2: recursive relation
    headPrint(n - 1);

    // step_3: processing
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter Value: ";
    cin >> n;

    cout << "Value N to 1: ";
    tailPrint(n);

    cout << endl;

    cout << "Value 1 to N: ";
    headPrint(n);
}