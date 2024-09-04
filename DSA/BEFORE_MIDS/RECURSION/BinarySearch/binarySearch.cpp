#include <iostream>
using namespace std;
bool binarySearch(int *arr, int s, int e, int key)
{
    int end = e - 1;
    // Base case;
    if (s > end)
    {
        return -1;
    }

    int mid = s + (end - s) / 2;

    // value found
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, mid - 1, end, key);
    }
}
int main()
{
    int size;
    cout << "Enter size of Array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;
    if (binarySearch(arr, 0, size, key))
    {
        cout << "Value found" << endl;
    };
}