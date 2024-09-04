#include <iostream>
using namespace;

int pivotNUmber(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1])
        {
            return mid;
            break;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
            break;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            return mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[10] = {4, 5, 6, 7, 8, 9, 10, 1, 2, 3};
    cout << "Pivot number is..:" << pivotNUmber(arr, 10);
}