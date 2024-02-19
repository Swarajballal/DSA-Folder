// 345. Reverse Vowels of a String
// Solved
// Easy
// Topics
// Companies
// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "hello"
// Output: "holle"
// Example 2:

// Input: s = "leetcode"
// Output: "leotcede"
 

// Constraints:

// 1 <= s.length <= 3 * 105
// s consist of printable ASCII characters.


#include<bits/stdc++.h>
using namespace std;

// Two pointer approach Time: O(n) Space: O(1)

bool isVowel(char c){  // Function to check if a character is a vowel or not
    char ch = tolower(ch);  // Converting the character to lower case
    return ( c == 'a' || c == 'e' || c =='i' || c == 'o' || c =='u'); // Checking if the character is a vowel or not
}
        

string reverseVowels(string s) {
    int start = 0, end = s.length() - 1;
            while(start < end)
            {
                if(isVowel(s[start]) && isVowel(s[end])) // If both the characters are vowels
                {
                    swap(s[start], s[end]);  // Swapping the characters
                    start++,end--;
                }
                else if(!isVowel(s[start])) // If the first character is not a vowel
                {
                    start++; // Incrementing the start pointer
                }
                else  // If the second character is not a vowel
                {
                    end--; // Decrementing the end pointer
                }
            }
        return s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "String with vowels reversed: " << reverseVowels(s) << endl;
    return 0;
}