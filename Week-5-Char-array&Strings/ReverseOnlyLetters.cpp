// 917. Reverse Only Letters
// Solved
// Easy
// Topics
// Companies
// Hint
// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.

 

// Example 1:

// Input: s = "ab-cd"
// Output: "dc-ba"
// Example 2:

// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"
// Example 3:

// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"
 

// Constraints:

// 1 <= s.length <= 100
// s consists of characters with ASCII values in the range [33, 122].
// s does not contain '\"' or '\\'.


#include <bits/stdc++.h>
using namespace std;

// Using two pointer approach Time complexity: O(n) where n is the length of the string or n/2
// using no inbuilt function of S C++ library

// int sizeOfString(string s)
// {
//     int count = 0;
//     while(s[count] != '\0')  // counting the size of the string until null character is encountered
//     {
//         count++;  // incrementing the count
//     }
//     return count;   // returning the size of the string
// }

// string reverseOnlyLetters(string s) {
//     int start = 0, end = sizeOfString(s) - 1;   // start and end pointer   

//     while(start < end) {
        
//          if(((s[start] >= 'a' && s[start] <= 'z') || (s[start] >= 'A' && s[start] <= 'Z')) && 
//            ((s[end] >= 'a' && s[end] <= 'z') || (s[end] >= 'A' && s[end] <= 'Z')))  // if both the characters are letters and not special characters
//             {
//                 s[start] = s[start] ^ s[end];  // swapping the characters using XOR operation
//                 s[end] = s[start] ^ s[end];  // swapping the characters using XOR operation
//                 s[start] = s[start] ^ s[end];  // swapping the characters using XOR operation
//                 start++,end--;
//             }
//             else if(!((s[start] >= 'a' && s[start] <= 'z') || (s[start] >= 'A' && s[start] <= 'Z')))
//             // if start pointer is not a letter then move to the next character
//             {
//                 start++;
//             }
//             else  // if end pointer is not a letter then move to the previous character
//             {
//                 end--;
//             }
//         }

//         return s;  // return the string after reversing the letters
//     }

// Using inbuilt function of S C++ library time complexity: O(n) where n is the length of the string or n/2

string reverseOnlyLetters(string s) {
    int start = 0, end = s.length() - 1; // start and end pointer

    while(start < end)
    {
        if(isalpha(s[start]) && isalpha(s[end])) // if both the characters are alphabets and not special characters isalpha is an inbuilt function of S C++ library which checks whether the character is an alphabet or not
        {
            swap(s[start], s[end]);  // swapping the characters
            start++,end--;
        }
        else if(!isalpha(s[start])) // if start pointer is not a letter then move to the next character
        {
            start++;
        }
        else  // if end pointer is not a letter then move to the previous character
        {
            end--;
        }
    }
    return s;  // return the string after reversing the letters
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        string s;
        cin >> s;
        cout << "After reversing only letters string would look like: " << reverseOnlyLetters(s) << endl;
    }
    return 0;
}

