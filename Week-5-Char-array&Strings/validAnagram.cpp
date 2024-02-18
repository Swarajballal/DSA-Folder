// 242. Valid Anagram
// Solved
// Easy
// Topics
// Companies
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false
 

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.
 
#include <bits/stdc++.h>
using namespace std;


// Method 1 (Using Sorting) sorting both the strings and then comparing them
// Time complexity: O(nlogn) where n is the length of the string
// bool findValidAnagram(string s, string t) {
//     sort(s.begin(),s.end());  // sorting the string s
//     sort(t.begin(),t.end());  // sorting the string t

//     if(s==t)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }


// Method 2 Using counting creating a own map time complexity is O(n) + O(m) + O(256) = O(n) where n is the length of the string so total time complexity is O(n + m) n and m could be different or same

bool findValidAnagram(string s, string t) {
    // 256 because there are 256 characters in the ascii table representing all the characters
    int freqTable[256] = {0};  // creating a frequency table of 256 size

    for(int i = 0; i < s.length(); i++)  // incrementing the frequency of each character in the string s
    {
        freqTable[s[i]]++; 
    }

    for(int i = 0; i < t.size(); i++)  // decrementing the frequency of each character in the string t
    {
        freqTable[t[i]]--;
    }


    for(int i = 0; i < 256; i++)   // checking if the frequency of each character is 0 or not if not then return false
    {
        if(freqTable[i] != 0)
        {
            return false;
        }
    }

    return true; // if all the frequencies are 0 then return true
}
 

int main()
{
    string s,t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;
    
    if(findValidAnagram(s,t))
    {
        cout << "The given strings are anagrams of each other"<<endl;
    }
    else
    {
        cout << "The given strings are not anagrams of each other"<<endl;
    }
}