// a. Write a function that uses for loop to print the elements of an array. The function should take
// an array and its size as parameters.
// b. Write a function that uses for loop to print the elements of an array in reverse order. The
// function should take an array and its size as parameters.

#include <iostream>
using namespace std;
void headPrint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void tailPrint(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
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

    cout << "Elements head print: ";
    headPrint(arr, size);

    cout << endl;

    cout << "Elemets Tail print: ";
    tailPrint(arr, size);
}