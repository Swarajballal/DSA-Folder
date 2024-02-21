// 767. Reorganize String
// Solved
// Medium
// Topics
// Companies
// Hint
// Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.

// Return any possible rearrangement of s or return "" if not possible.

 

// Example 1:

// Input: s = "aab"
// Output: "aba"
// Example 2:

// Input: s = "aaab"
// Output: ""
 

// Constraints:

// 1 <= s.length <= 500
// s consists of lowercase English letters.

 
// Time Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

string reorganizeString(string s)
{
    int hash[26] = {0}; // 26 because we can create a hashmap for 26 since alphabets are only between a - z that is 0 - 25 and if a that means a - a = 97 - 97 = 0 that will be mapped with 0 and z is 122 - 97 = 25 . so z can be mapped to 25 and all instances are put initially 0 for count.

    // count the number of instances for each character in the string

    for(int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;   // - 'a' because hash is a int type of array so if character is a in s[i] that means a - a to typecast as int which would be 97 - 97  so at hash[0] increase count to 1 from 0 . similarly for other character store count of occurence
    }

    // find the maximum occuring character and store it.

    char max_freq_char; // maximum frequency character
    int max_freq = INT_MIN; // max frequency 

    for(int i = 0; i < 26; i++)
    {
        if(hash[i] > max_freq)  // if you find any character with more count than max_freq 
        {
            max_freq = hash[i];   // use that count as new max frequency
            max_freq_char = i + 'a';  // store that character as max frequency character
        }
    }

    // Put the character with most frequency alternatively in the string first
    int index = 0;  // index to put character in the string
    while(max_freq > 0 && index < s.size()) { // while the most frequency of the character is greater then 0 that means it still has occurence left also checking if index is less then s.size() because if there are more occurence left even if we reach the end of the string that means cyclicaly the next occurence will be at 1th index assuming alternate allocation started from 0th index. if cyclicaly we place the character of same type at 1th index then 0 and 1 st index becomes same and that is not adjacent hence out of loop if index is more then s.size() .

        s[index] = max_freq_char;  // put the most frequency character 
        max_freq--; // decrease the frequency
        index += 2;
    }

    if(max_freq != 0)  // if there is still the occurence of the most occuring character is still left then return "" since we cant rearrange without adjacent similar characters.
    {
        return "";
    }

    hash[max_freq_char - 'a'] = 0;  // updating the occurence to 0 of most occurring character if successfully all occurence of most occuring character is placed 

    // putting rest of the character in the string

    for(int i = 0; i < 26; i++) 
    {
        while(hash[i] > 0) // rest of character which has count more then 0
        {
            index = index >= s.size() ? 1 : index;  // if index is almost at the end or more then index will start from 1 since most occuring character placed from 0th position alternatively hence from 1 put rest of the character alternatively
            s[index] = i + 'a';  // put the character
            hash[i]--; // decrease the count if the character is placed.
            index += 2;
        }
    }

    return s;   // rearranged s string


}

int main()
{
    int T;
    cout << "Enter the number of testcases: ";
    cin >> T;

    while(T--)
    {
        string s;
        cout << "Enter the string you want to reorganize: ";
        cin >> s;
        cout << "After reorganizing the string would look like "<<reorganizeString(s)<<endl;
    }

    return 0;
}