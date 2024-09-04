// 2 - Print n To 1
#include <iostream>
using namespace std;
void greetings(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }

    // processing
    cout << n << endl;

    // recursive relation
    greetings(n - 1);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    greetings(n);
}