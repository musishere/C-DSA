// Find the peak value of the mountain array
#include <iostream>
using namespace;

int Peakvalue(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[5] = {3, 4, 5, 6, 1};
    cout << Peakvalue(arr, 5);
    cout << endl;
}