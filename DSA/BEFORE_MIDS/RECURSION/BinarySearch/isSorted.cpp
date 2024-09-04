#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    // Base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    // processing
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *arr = new int[size];

    cout << "Enter value: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (isSorted(arr, size))
    {
        cout << "Array is Sorted." << endl;
    };
}