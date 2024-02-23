// 28. Find the Index of the First Occurrence in a String
// Solved
// Easy
// Topics
// Companies
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

// Constraints:

// 1 <= haystack.length, needle.length <= 104
// haystack and needle consist of only lowercase English characters.

#include <iostream>
#include <string>
using namespace std;


int strStr(string haystack, string needle) {
        int n = haystack.size(); // size of the haystack
        int m = needle.size();  // size of the needle

        for(int i = 0; i <= n-m; i++)   // iterate through the haystack n - m because the most i can go is n - m after that the needle will not fit in the haystack out of bounds
        {
            for (int j = 0; j < m; j++)  // iterate through the needle
            {
                if(needle[j] != haystack[i+j])    // if the needle and haystack characters are not equal then break j != i + j
                {
                    break;
                }
    
                if(j == m-1)  // if j is equal to m - 1 then return i  where m - 1 is the last index of the needle
                {
                    return i;  // return i
                }
            }
        }
        return -1;
    }


int main ()
{
    string haystack;
    string needle;
    cout << "Enter the haystack: ";
    cin >> haystack;
    cout << "Enter the needle: ";
    cin >> needle;
    cout << "The index of the first occurrence of needle in haystack is: " << strStr(haystack, needle); 
    return 0;
}