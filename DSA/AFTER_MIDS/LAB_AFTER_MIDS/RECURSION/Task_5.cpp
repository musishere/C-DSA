// Write a recursive function that calculates the sum of the elements of an array and returns the
// answer.
#include <iostream>
using namespace std;
int headPrintSum(int arr[], int size, int start)
{
    // base case
    if (size == 0)
    {
        return;
    }

    // recursive relation
    return arr[0] + headPrintSum(arr, size - 1, start + 1);
}
int main()
{
    int size;
    cout << "Enter size of Array: ";
    cin >> size;

    int *arr = new int[size];
    cout << "Enter elements of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Head Print of Elements are: ";
    headPrintSum(arr, size, 0);

    cout << endl;
}