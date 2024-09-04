// return true if given number is suitable to power of 2 else give false
#include <iostream>
using namespace;
int check(int x)
{
    int ans;
    for (int i = 0; i <= 30; i++)
    {
        ans = pow(2, i);
        if (ans == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    check(16);
}