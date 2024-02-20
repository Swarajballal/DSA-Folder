// 205. Isomorphic Strings
// Solved
// Easy
// Topics
// Companies
// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true
 

// Constraints:

// 1 <= s.length <= 5 * 104
// t.length == s.length
// s and t consist of any valid ascii character.


#include<bits/stdc++.h>
using namespace std;


bool isIsomorphic(string s, string t) {

    if(s.length() != t.length())  // If the length of the strings are not equal, then they cannot be isomorphic.
    {
        return false;  // Return false.
    }

    int hash[256] = {0};  // Create a hash array of size 256 and initialize it with 0. to map the occurences of the characters in s string.
    bool visited[256] = {0};  // Create a visited array of size 256 and initialize it with 0. for mapping the occurences of the characters in t string.


    // loop for mapping the occurences of the characters in s and t strings.

    for(int i = 0; i < s.size(); i++)
    {
        if(hash[s[i]] == 0 && visited[t[i]] == 0)  // If the hash of s[i] is 0 and visited of t[i] is 0, then map the occurences of the characters in s and t. else i++.
        {
            hash[s[i]] = t[i];  // Map the occurences of the characters in s in map with characters in t and cannot be mapped again in s string.
            visited[t[i]] = true;  // Mark the visited of t[i] as true now it is visited and cannot be mapped again in t string.
        }
    }

    // loop to check if we can make the string t from string s using the hash map.

    for(int i = 0; i < s.size(); i++)  
    {
        if(char(hash[s[i]]) != t[i])  // If the hash of s[i] is not equal to t[i], then return false. and char because hash is of int type. so typecast int to char.
        {
            return false;  // Return false if the hash of s[i] is not equal to t[i].
        } 
    }
    return true;  // Return true if the strings are isomorphic. if no above condition is satisfied.
}

int main()
{
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;

    while(T--)
    {
        string s,t;
        cout << "Enter the first string: ";
        cin >> s;
        cout << "Enter the second string: ";
        cin >> t;

        if(isIsomorphic(s, t))
        {
            cout << "The strings are isomorphic." << endl;
        }
        else
        {
            cout << "The strings are not isomorphic." << endl;
        }
    }

    return 0;
}