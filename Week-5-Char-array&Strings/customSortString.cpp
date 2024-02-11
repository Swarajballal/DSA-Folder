// 791. Custom Sort String
// Solved
// Medium
// Topics
// Companies
// You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.

// Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.

// Return any permutation of s that satisfies this property.

 

// Example 1:

// Input: order = "cba", s = "abcd"
// Output: "cbad"
// Explanation: 
// "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
// Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
// Example 2:

// Input: order = "cbafg", s = "abcd"
// Output: "cbad"
 

// Constraints:

// 1 <= order.length <= 26
// 1 <= s.length <= 200
// order and s consist of lowercase English letters.
// All the characters of order are unique.


#include<bits/stdc++.h>
using namespace std;


string customSortString(string order, string s)
{
    string s1, s2;
    // s1 to store the characters of s that are present in order
    // s2 to store the characters of s that are not present in order
    int a[26] = {0}; // 26 represents the number of alphabets a-z as 0-25 and 26 index is for the null character
    for(char c: order) a[c-'a']++; // increment the count of the character in the order string in the array for example c = b then a[b-'a'] = a[98 - 97] = a[1] = a[1] + 1 = 0 + 1 = 1
    for(char c : s)
    {
        if(a[c-'a'] == 0)   // if the character is not present in a array then add it to s2 that means its count is 0
        {
            s2+=c;
        }
        else
        {
            a[c-'a']++;   // if the character with count > 0 is present in the s as it is also present in the order then increment the count of the character in the array so if 1 it becomes 2
        }
    }
    for(char c : order)   // loop for order because we want the characters in the order as they are present in the order string
    {
        while(a[c-'a'] > 1)  // as long the count of the character is greater than 1 add the character to the s1 string and decrement the count of the character in the array since  > 1 because this 1 is for order string and rest all are from s string so we need only the s string characters
        {
            s1+=c;   // add the character to the s1 string
            a[c-'a']--;   // decrement the count of the character in the array
        }
    }
    return s1+s2;   // return the s1 and s2 string s1 will have the characters that are present in the order string and s2 will have the characters that are not present in the order string with order string sequence
}

int main()
{
    string order = "cba";
    string s = "abcd";
    cout << customSortString(order, s) << endl;
    return 0;
}