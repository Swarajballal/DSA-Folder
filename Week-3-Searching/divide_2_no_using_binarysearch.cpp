#include <bits/stdc++.h>
using namespace std;

int binarySearch(int dividend, int divisor)
{
    // for positive numbers
    // int start = 0, end = dividend, quotient = 1;

    // while (start <= end)
    // {
    //     int mid = start + (end - start) / 2;

    //     if (mid * divisor == dividend) // perfect match
    //     {
    //         return mid;
    //     }
    //     else if (mid * divisor > dividend) // if mid * divisor > dividend then we will search in left part
    //     {
    //         end = mid - 1;
    //     }
    //     else
    //     {
    //         // store the current mid in quotient
    //         quotient = mid;
    //         // search in right part if more value is possible
    //         start = mid + 1;
    //     }
    // }
    // return quotient;

    // for negative numbers also (both dividend and divisor) and positive numbers
    int start = 0, end = abs(dividend), quotient = 1; // abs() is used to convert negative number to positive so use it for both dividend and divisor all instances
    int sign = 1;

    if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)) // made it early so that perfect match can also be checked for -ve or +ve sign
    {
        sign = -1;
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * abs(divisor) == abs(dividend)) // perfect match
        {
            return sign * mid;
        }
        else if (mid * abs(divisor) > abs(dividend)) // if mid * divisor > dividend then we will search in left part
        {
            end = mid - 1;
        }
        else
        {
            // store the current mid in quotient
            quotient = mid;
            // search in right part if more value is possible
            start = mid + 1;
        }
    }
    return sign * quotient;
}

int main()
{
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    int ans = binarySearch(dividend, divisor);
    cout << "Quotient for " << dividend << " and " << divisor << " is : " << ans << endl;
    return 0;
}
