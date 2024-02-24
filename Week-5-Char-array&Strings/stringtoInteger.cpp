// 8. String to Integer (atoi)
// Solved
// Medium
// Topics
// Companies
// Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

// The algorithm for myAtoi(string s) is as follows:

// Read in and ignore any leading whitespace.
// Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
// Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
// Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
// If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
// Return the integer as the final result.
// Note:

// Only the space character ' ' is considered a whitespace character.
// Do not ignore any characters other than the leading whitespace or the rest of the string after the digits.
 

// Example 1:

// Input: s = "42"
// Output: 42
// Explanation: The underlined characters are what is read in, the caret is the current reader position.
// Step 1: "42" (no characters read because there is no leading whitespace)
//          ^
// Step 2: "42" (no characters read because there is neither a '-' nor '+')
//          ^
// Step 3: "42" ("42" is read in)
//            ^
// The parsed integer is 42.
// Since 42 is in the range [-231, 231 - 1], the final result is 42.
// Example 2:

// Input: s = "   -42"
// Output: -42
// Explanation:
// Step 1: "   -42" (leading whitespace is read and ignored)
//             ^
// Step 2: "   -42" ('-' is read, so the result should be negative)
//              ^
// Step 3: "   -42" ("42" is read in)
//                ^
// The parsed integer is -42.
// Since -42 is in the range [-231, 231 - 1], the final result is -42.
// Example 3:

// Input: s = "4193 with words"
// Output: 4193
// Explanation:
// Step 1: "4193 with words" (no characters read because there is no leading whitespace)
//          ^
// Step 2: "4193 with words" (no characters read because there is neither a '-' nor '+')
//          ^
// Step 3: "4193 with words" ("4193" is read in; reading stops because the next character is a non-digit)
//              ^
// The parsed integer is 4193.
// Since 4193 is in the range [-231, 231 - 1], the final result is 4193.
 

// Constraints:

// 0 <= s.length <= 200
// s consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.

#include<bits/stdc++.h>
using namespace std;

int atoi(string s) {
        
        int num = 0, i = 0, sign = 1;  // sign is used to store the sign of the number
        // num is used to store the number // i is used to iterate through the string
        
        while(s[i] == ' ')  // to ignore the leading white spaces
        {
            i++;
        }
        
        while(i < s.size() && (s[i] == '-' || s[i] == '+'))   // to check if the number is negative or positive
        {
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }
        
        while(i < s.size() && isdigit(s[i]))  // to check if the character is a digit
        {
            if(num > INT_MAX / 10 || (num == INT_MAX/10 && s[i] > '7'))  // to check if the number is within the range of INT_MAX and INT_MIN because INT_MAX /10 = 214748364 and INT_MIN / 10 = -214748364 so if the number is greater than 2147483647 or less than -2147483647 then it is out of the range of INT_MAX and INT_MIN , /10 because we are multiplying the number by 10 and adding the next digit so we dont to go out of range when we multiply by 10 and s[i] > '7' because we are checking if the number is greater than 2147483647 so the last digit should be less than 7
            {
                return sign = -1 ? INT_MIN : INT_MAX;  // if the number is out of range then return INT_MIN or INT_MAX depending on the sign of the number
            }
            num = num * 10 + (s[i] - '0');  // to convert the string to integer - '0' because the ascii value of 0 is 48 so if we subtract 48 from any digit then we get the integer value of the digit for example '1' - '0' = 49 - 48 = 1
            i++;
        }
        
        if(i < s.size()) {  // if the number is not a valid number then return -1
        return -1;
        }
    
        return sign*num;  // return the number
    }


    int main()
    {
        string s;
        cout << "Enter the string: ";
        cin >> s;
        cout << "The integer value of the string is: " << atoi(s) << endl;
        return 0;
    }