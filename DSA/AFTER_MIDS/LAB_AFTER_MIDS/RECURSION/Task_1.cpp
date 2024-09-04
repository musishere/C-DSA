// Question 1:
// a. Write a function that uses for loop to print values from N to 1 e.g. if N =5, then the output
// should be : 5, 4, 3, 2, 1. N should be a parameter for this function.
// b. Write a function that uses for loop to print values from 1 to N e.g. if N =5, then the output
// should be : 1,2,3,4,5. N should be a parameter for this function.
#include <iostream>
using namespace std;
void headPrint(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}
void tailPrint(int n)
{
    for (int i = n; i > 0; i--)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << "Values N to 1: ";
    tailPrint(n);

    cout << endl;

    cout << "Values 1 to N: ";
    headPrint(n);
}