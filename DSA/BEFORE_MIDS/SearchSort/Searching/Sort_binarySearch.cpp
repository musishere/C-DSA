#include <iostream>
using namespace;
void BinarySearch(int arr[], int size, int n)
{
    int start, end, loc, mid;
    start = 0;
    end = size - 1;
    loc = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == n)
        {
            loc = mid;
            break;
        }
        else if (arr[mid] > n)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (loc == -1)
    {
        cout << "Value was not Found.";
    }
    else
    {
        cout << "Value was Found at index " << loc << endl;
    }
}
int main()
{
    int arr[10], size, temp;
    cout << "Enter the Total Number you want to enter:";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {                    //{5,4,3,2,1}
                temp = arr[i];   // temp =5
                arr[i] = arr[j]; // arr[i]=4
                arr[j] = temp;   // arr[j]=5;
            }
        }
    }
    cout << "Sorted array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int num;
    cout << "Enter the number you want to seacrh.";
    cin >> num;
    BinarySearch(arr, size, num);
}