// 5. Longest Palindromic Substring
// Solved
// Medium
// Topics
// Companies
// Hint
// Given a string s, return the longest 
// palindromic
 
// substring
//  in s.

 

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"
 

// Constraints:

// 1 <= s.length <= 1000
// s consist of only digits and English letters.


// Method 1: Brute Force Time Complexity: O(n^3) Space Complexity: O(1) Not an optimal solution
// Method 2: Using Dynamic Programming in future.

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &s, int start, int end) // helper function to check if the string is palindrome or not
    {
        while(start < end)
        {
            if(s[start] != s[end]) // if the start and end characters are not equal then return false
            {
                return false;  // return false
            }
            start++;
            end--;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        string ans = ""; // to store the longest palindromic substring
        for(int i = 0; i < s.size(); i++)   // iterate through the string i here is the starting index
        {
            for(int j = i; j < s.size(); j++)  // iterate through the string j here is the ending index
            {
                if(isPalindrome(s,i,j)) {  // if the string is palindrome
                    string t = s.substr(i , j - i + 1); // then store the substring in t
                    ans = t.size() > ans.size() ? t : ans; // if the size of t is greater than ans then store t in ans since we need the longest palindromic substring
                }
            }
        }
        return ans; // return the longest palindromic substring
    }

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "The longest palindromic substring is: " << longestPalindrome(s);
    return 0;
}