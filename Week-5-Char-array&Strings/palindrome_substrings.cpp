// 647. Palindromic Substrings

// Companies
// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

// Constraints:

// 1 <= s.length <= 1000
// s consists of lowercase English letters.

#include <bits/stdc++.h>
using namespace std;

// brute force approach
// Method 1: find all the substrings and check if they are palindrome or not and increment the count
// so total time complexity: O(n^2) + O(n) = O(n^3)
// Time complexity: O(n^3) and space complexity: O(n^2)
// bool checkifpalindrome(string s)  // this is O(n) time complexity
// {
//     int i = 0;
//     int j = s.length() - 1;
//     while(i <= j)
//     {
//         if(s[i] != s[j])
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// int palindormeSubstrings(string s)
// {
//     //step1 : find all the substrings
//     vector<string> substrings;
//     int count = 0;

//     for(int i = 0; i < s.length(); i++)       // this is O(n^2) time complexity
//     {
//         for(int j = 1; j <= s.length() - i; j++)
//         {
//             substrings.push_back(s.substr(i, j));
//         }
//     }
//     // step2: check if the substring is palindrome or not
//     for(int i = 0; i < substrings.size(); i++)
//     {
//         if(checkifpalindrome(substrings[i]))
//         {
//             count++;
//         }
//     }
//     return count;

// }

int main()
{
    string s = "abc";
    int ans = palindormeSubstrings(s);
    cout << "The number of palindorme substrings are: " << ans << endl;

    return 0;
}