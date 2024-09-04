#include <iostream>
using namespace;
void Check(int arr[], int size)
{
    int even = 0, odd = 0, zero = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] % 2 != 0)
        {
            odd++;
        }
        else
        {
            cout << "Number does not exist ";
        }
    }
    cout << "Even count: " << even << endl;
    cout << "Odd count: " << odd << endl;
    cout << "Zero count: " << zero << endl;
}
int main()
{
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    Check(arr, size);
}