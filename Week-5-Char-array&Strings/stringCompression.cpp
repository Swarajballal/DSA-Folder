// 443. String Compression
// Solved
// Medium
// Topics
// Companies
// Hint
// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of consecutive repeating characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the array.

// You must write an algorithm that uses only constant extra space.

 

// Example 1:

// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
// Example 2:

// Input: chars = ["a"]
// Output: Return 1, and the first character of the input array should be: ["a"]
// Explanation: The only group is "a", which remains uncompressed since it's a single character.
// Example 3:

// Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
// Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
// Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
 

// Constraints:

// 1 <= chars.length <= 2000
// chars[i] is a lowercase English letter, uppercase English letter, digit, or symbol.


#include<bits/stdc++.h>
using namespace std;


int compress(vector<char>& chars) {
    int index = 0, count = 1;  // index is used to keep track of the compressed string length and count is used to keep track of the number of times a character is repeated
    char prev = chars[0];  // prev is used to keep track of the previous character initially it is set to the first character of the array

    for(int i = 1; i < chars.size(); i++)  // loop through the character array
    {
        if(chars[i] == prev)  // if the current character is same as the previous character then increment the count
        {
            count++; // increment the count
        }
        else
        {
            chars[index++] = prev;  // if the current character is not same as the previous character then add the previous character to the compressed string
            if(count > 1)  // only if the count is greater than 1 then add the count of the character to the compressed string
            {   
                int start = index; // since the count will be in reverse order we need to reverse it so we store the start index of the count
                while(count) {  
                    chars[index++] = (count % 10) + '0';  // add the count to the compressed string if count > 10 then add each digit separately
                    count /= 10;  // divide the count by 10
               }
               reverse(chars.begin() + start, chars.begin() + index);   // reverse the count from start to index since it is in reverse order only numbers are reversed
            }
            prev = chars[i];   // set the previous character to the current character
            count = 1;  // reset the count to 1
        }
    }

    chars[index++] = prev;   // if out of bound and chars.size() is met then add the last character to the compressed string
    if(count > 1)   // only if the count is greater than 1 then add the count of the character to the compressed string
    {   
        int start = index;  // same as above
        
        while(count) {

            chars[index++] = (count % 10) + '0';
            count /= 10;
        }
        reverse(chars.begin() + start, chars.begin() + index);
    }

    return index;  // return the length of the compressed string as index would be at the end we can return index
}

int main()
{
    int T;
    cout << "Enter the number of testcases: ";
    cin >> T;

    while(T--)
    {
        int n;
        cout << "Enter the size of character array: ";
        cin >> n;
        vector<char>chars;
        for(int i = 0; i < n; i++)
        {
            char ch;
            cout << "Enter the " << i+1 << " character for the character array: ";
            cin >> ch;
            chars.push_back(ch);
        }
        cout << "The compressed string length is: " << compress(chars) << endl;
    }
}