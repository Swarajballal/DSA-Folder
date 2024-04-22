#include <bits/stdc++.h>
using namespace std;

double findSqrt(int num, int precision)
{
    // this cpde only gives the integer part of the square root of the number
    //  sqrt of num will lie between 0 to num
    //  int start = 0, end = num, target = num, ans = -1;
    //  int mid = start + (end - start) / 2;
    //  while (start <= end)
    //  {
    //      if (mid * mid == target) // if mid*mid is equal to target then return mid
    //      {
    //          return mid;
    //      }
    //      else if (mid * mid > target) // if mid*mid is greater than target then search in left half i.e end = mid - 1
    //      {
    //          end = mid - 1;
    //      }
    //      else
    //      {
    //          ans = mid; // first store the ans and then search in right half i.e start = mid + 1 if there is more closer value to target
    //          start = mid + 1;
    //      }
    //      mid = start + (end - start) / 2;
    //  }
    //  return ans;

    // with floating values
    int start = 0, end = num, target = num, ans = -1;
    
    int mid = start + (end - start) / 2;
    
    while (start <= end)
    {
        if (mid * mid == target) // if mid*mid is equal to target then return mid
        {
            return mid;
        }
        else if (mid * mid > target) // if mid*mid is greater than target then search in left half i.e end = mid - 1
        {
            end = mid - 1;
        }
        else
        {
            ans = mid; // first store the ans and then search in right half i.e start = mid + 1 if there is more closer value to target
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    // now we have to find the floating part of the square root
    double finalAns = ans;              // store the integer part of the square root in double because the square root of a number can be a floating point number
    double step = 0.1;                  // starting floating point value
    for (int i = 0; i < precision; i++) //  precision is the number of decimal points to find the square root for
    {
        for (double j = finalAns; j * j <= target; j += step) // j*j <= target so that we can find the closest value to target and add step each time so that we can get closest value according to precision or decimal points each time setp adds either 0.1 - 0.9 or 0.01-0.09 or 0.001-0.009 etc after completion of inner for loop and update finalAns with j
        {
            finalAns = j; // update finalAns with j max value possible
        }
        step /= 10; // divide step by 10 to get the next decimal point value
    }
    return finalAns;
}

int main()
{
    int num, precision;
    cout << "Enter the number to find Square root for: " << endl;
    cin >> num;
    cout << "Enter the precision value or number of decimal points to find Square root for: " << endl;
    cin >> precision;
    double result = findSqrt(num, precision); // used double because the square root of a number can be a floating point number and range of double is greater than int
    cout << "Square root of " << num << " is: " << result << endl;
    return 0;
}