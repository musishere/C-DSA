// Find the first and last occurance in  array[1,2,3,3,3,3,5]
#include <iostream>
using namespace;

int firstoccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;
    mid = start + (end - start) / 2; // 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;     // 2
            end = mid - 1; // 2
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans; // 3
}
int lastoccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 3, 5};
    pair<int, int> p;
    p.first = firstoccurance(arr, 7, 3);
    p.second = lastoccurance(arr, 7, 3);

    cout << p.first << endl;
    cout << p.second;
}