#include <iostream>
using namespace std;

int fastExponential(int base, int power)  // O(log power) time complexity
{
    int ans = 1;
    while(power > 0)
    {
        if(power & 1) // odd number then ans = ans * base
        {
            ans *= base;
        }
        base = base*base;   // if power is even then base = base * base
        power = power >> 1; // power = power / 2 log power times
    }
    return ans;
}

int slowExponential(int base, int power)  // O(power) time complexity
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