// 201. Bitwise AND of Numbers Range
// Solved
// Medium
// Topics
// Companies
// Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

 

// Example 1:

// Input: left = 5, right = 7
// Output: 4
// Example 2:

// Input: left = 0, right = 0
// Output: 0
// Example 3:

// Input: left = 1, right = 2147483647
// Output: 0
 

// Constraints:

// 0 <= left <= right <= 231 - 1


#include<bits/stdc++.h>
using namespace std;


int bitwiseAnd(int left, int right) // O(1) time complexity
{
    int shift = 0;  // shift to find the common prefix of left and right keep the count of shift required to find the common prefix of left and right

    while(left < right)  // while left is less then right
    {
        left >>= 1; // right shift by 1 untill we find the common prefix that is present in both left and right
        right >>= 1;  // right shift by 1 untill we find the common prefix that is present in both left and right
        shift++; // increase the shift count
    }

    return left << shift;  // left shift the no of times we found shift to find the common prefix of left and right we can also return right << shift because both left and right will have the same common prefix
}


int main()
{
    int T;
    cout << "Enter the number of testcases: ";
    cin >> T;

    while(T--)
    {
        int left, right;
        cout << "Enter the left range number: ";
        cin >> left;
        cout << "Enter the right range number: ";
        cin >> right;

        cout << "Bit wise AND of "<< left << " & " << right << " is "<< bitwiseAnd(left, right) << endl;
    }
    return 0;
}