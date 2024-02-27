// 12. Integer to Roman
// Solved
// Medium
// Topics
// Companies
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given an integer, convert it to a roman numeral.

 

// Example 1:

// Input: num = 3
// Output: "III"
// Explanation: 3 is represented as 3 ones.
// Example 2:

// Input: num = 58
// Output: "LVIII"
// Explanation: L = 50, V = 5, III = 3.
// Example 3:

// Input: num = 1994
// Output: "MCMXCIV"
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

// Constraints:

// 1 <= num <= 3999


#include<bits/stdc++.h>
using namespace std;

string convertToRoman(int n)
{
    string romanSymbols[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" }; // create an array of roman symbols we added 900 and 400 and 90 and 40 and 9 and 4 as well because they are special cases else the algo is checking largest to smallest
    int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };  // create an array of values for the above symbols
    string ans = "";

   for(int i = 0; i < 13; i++)   // loop through the value and symbols array
   {
        while(n >= values[i])   // if the number is greater than the value of the symbol
        {
            ans += romanSymbols[i];  // add the symbol to the ans string
            n -= values[i];  // subtract the value from the number
        }
   }
   return ans; // return the ans string
}

int main()
{
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;

    while(T--)
    {
        int n;
        cout <<" Enter the number you want to convert into Roman Number: ";
        cin >> n;

        cout << n << " In Roman will be " << convertToRoman(n) << endl;
    }

    return 0;
}