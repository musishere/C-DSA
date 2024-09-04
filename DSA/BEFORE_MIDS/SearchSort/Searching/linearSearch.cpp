#include <iostream>
using namespace;
int LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter size of Array";
    cin >> size;
    int arr[size];
    cout << "Enter numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter number to search in array:";
    cin >> key;

    cout << LinearSearch(arr, size, key) << endl;
}