// Write a recursive function that calculates the product of the elements of an array and returns the
//     answer
#include <iostream>
using namespace std;
int product(int arr[], int size)
{
    // Base case:
    if (size == 0)
    {
        return 1;
    }

    return arr[size - 1] * product(arr, size - 1);
}
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter Elements of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << product(arr, size) << endl;
}