//  3 - Sum through recursion
#include <iostream>
using namespace std;
void sum(int n, int s)
{
    // Base Case:
    if (n == 0 || n == 1)
    {

        cout << s << endl;
        return;
    }

    // Recursive Realtion
    sum(n - 1, n + s);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    sum(n, 0);
}