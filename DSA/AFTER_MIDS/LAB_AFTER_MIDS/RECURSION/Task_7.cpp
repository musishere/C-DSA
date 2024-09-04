// Write a recursive function that calculates the factorial of a number and returns the answer.The
// function should take the number as a parameter
#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
}
