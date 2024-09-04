#include <iostream>
using namespace;
void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++) // for array size
    {
        for (int i = 0; i < size - 1; i++) // for index size bcz index = size - 1
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }

    cout << "sorted array is: " << endl; // sorted output
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];

    cout << "Enter 10 integer values: ";
    for (int i = 0; i < size; i++) // input
    {
        cin >> arr[i];
    }

    cout << "Number you entered are:" << endl;
    for (int i = 0; i < size; i++) // unsorted output
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    BubbleSort(arr, size); // pasing array and size to function
}