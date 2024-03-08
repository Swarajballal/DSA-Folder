#include <iostream>
using namespace std;

int fastExponential(int base, int power)
{
    int ans = 1;
    while(power > 0)
    {
        if(power & 1) // odd number
        {
            ans *= base;
        }
        ans = ans*base;  
        power = power >> 1; // power = power / 2
    }
    return ans;
}

int slowExponential(int base, int power)
{
    int ans = 1;
    for(int i = 0; i < power; i++)
    {
        ans *= base;
    }
    return ans;
}

int main()
{
    cout << slowExponential(5, 4) << endl;
    cout << fastExponential(5, 4) << endl;
    return 0;
}