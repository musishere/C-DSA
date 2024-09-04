// reverse string 123==>321 if exceeds(-2^31,2^31,1) then return 0
#include <iostream>
using namespace;
class ReverseString
{
private:
    int ans = 0;

public:
    int reversestring(int x) // X=123   //X=12  //X=1
    {
        while (x != 0)
        {
            int digit = x % 10; // digit=3   digit=2   digit=1
            if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
            {
                return 0;
            }
            ans = (ans * 10) + digit; // 0=0*10+3=3   3=3*10+2=32  32=32*10+1=321
            x = x / 10;               // 123/10 =12.3   12/10=1.2  1/10=0==>condition ends
        }
        return ans;
    }
};
int main()
{
    ReverseString r;
    cout << "Reverse string is..:" << r.reversestring(99999999882299);
}