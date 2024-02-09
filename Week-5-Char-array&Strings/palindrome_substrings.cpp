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

//#include <bits/stdc++.h>
//using namespace std;

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

//int main()
//{
//    string s = "abc";
//    int ans = palindormeSubstrings(s);
//    cout << "The number of palindorme substrings are: " << ans << endl;
//
//    return 0;
//}

// Brute Force Another Solution Solution 2 is of O(n^3) time complexity

//bool checkPalindrome(string s, int start, int end)
//{
//    while(start <= end)
//    {
//        if(s[start] != s[end])
//        {
//            return false;
//        }
//        else
//        {
//            start++;
//            end--;
//        }
//    }
//    return true;
//}
//
//int findSubstrings(string s) {
//    int count = 0;
//    for(int i = 0; i < s.length(); i++)
//    {
//        for(int j = i ; j < s.length(); j++)
//        {
//            if(checkPalindrome(s, i, j))
//            {
//                count++;
//            }
//        }
//    }
//    return count;
//}
//
//int countSubstrings(string s) {
//    // O(n^3) solution
//    // findSubstring
//    return findSubstrings(s);
//}


// Method 2: Expand around the center Time complexity: O(n^2) and space complexity: O(1)

#include<iostream>
using namespace std;

// Expand Function to find the palindrome in even case and odd case
int expandFunction(string s, int left, int right)
{
    int count = 0; // to count the number of palindrome substrings
    while(left >= 0 && right < s.length() && s[left] == s[right]) // if the left and right are equal then we have a palindrome also we need to check if the left and right are not going out of the string
    {
        count++; // increment the count
        left--; // move the left pointer to the left
        right++; // move the right pointer to the right
    }
    return count;
}

int subStringPalindrome(string s)
{
    int count = 0; // to count the total number of palindrome substrings
    for(int i = 0; i < s.length(); i++)
    {
        int oddAns = expandFunction(s, i, i);
        // expand the function for the odd case in this case both the left and right start from the same index so 1,3,5 would be the size of the palindrome
        count += oddAns; // add the count of the oddAns to the count
        int evenAns = expandFunction(s, i, i + 1);
        // expand the function for the even case in this case the left start from the same index and the right is one index ahead of the left so 2,4,6 would be the size of the palindrome
        count += evenAns; // add the count of the evenAns to the count
    }
    return count; // return the total count of the palindrome substrings

}

int main()
{
    string s = "aaa";
    int ans = subStringPalindrome(s);
    cout << "The number of palindorme substrings are: " << ans << endl;
    return 0;
}