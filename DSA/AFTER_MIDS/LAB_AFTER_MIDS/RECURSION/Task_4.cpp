// a.Write a recursive function to print the elements of an array.b.Write a recursive function to print the elements of an array in reverse order.
#include <iostream>
using namespace std;
void headPrint(int arr[], int size, int index = 0)
{
    // Base case
    if (index >= size)
    {
        return;
    }

    // recursive relation
    headPrint(arr, size, index + 1);

    // processing
    cout << arr[index] << " ";
}
void tailPrint(int arr[], int size, int index = 0)
{
    // Base case
    if (index >= size)
    {
        return;
    }
    // processing
    cout << arr[index] << " ";

    // recursive relation
    tailPrint(arr, size, index + 1);
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
    headPrint(arr, size);

    cout << endl;

    cout << "Tail Print of Elements are: ";
    tailPrint(arr, size);
}