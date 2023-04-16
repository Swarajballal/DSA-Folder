// 680. Valid Palindrome II

// Companies
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false

// Constraints:

// 1 <= s.length <= 105
// s consists of lowercase English letters.

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int start, int end) // to check palindrome after updating start or end index
{
    while (start <= end) // start less then equal to end
    {
        if (str[start] != str[end]) // if start element not equal to end element that means its not palindrome
        {
            return false; // return false if not palindrome
        }
        start++; // always increment start
        end--;   // always decrement end
    }
    return true; // if palindrome return true
}
bool validPalindrome(string s)
{
    int start = 0;            // start index
    int end = s.length() - 1; // end index
    while (start <= end)
    {
        if (s[start] != s[end]) // if start element not equal to end element
        {
            return checkPalindrome(s, start + 1, end) || checkPalindrome(s, start, end - 1); // check palindrome after removing either start element or end element if start is removed then new start = start + 1 or if end is removed then new end = end - 1 and pass as a parameter.
        }
        start++; // always increment start
        end--;   // always decrement end
    }
    return true; // if palindrome return true
}

int main()
{
    string s = "abcar";
    bool result = validPalindrome(s);

    if (result)
    {
        cout << "It is possible to make a palindrome by removing one character";
    }
    else
    {
        cout << "It is not possible to make a palindrome by removing one character";
    }
    return 0;
}