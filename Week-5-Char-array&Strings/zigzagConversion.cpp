// 6. Zigzag Conversion
// Solved
// Medium
// Topics
// Companies
// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"

// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string s, int numRows);
 

// Example 1:

// Input: s = "PAYPALISHIRING", numRows = 3
// Output: "PAHNAPLSIIGYIR"
// Example 2:

// Input: s = "PAYPALISHIRING", numRows = 4
// Output: "PINALSIGYAHRPI"
// Explanation:
// P     I    N
// A   L S  I G
// Y A   H R
// P     I
// Example 3:

// Input: s = "A", numRows = 1
// Output: "A"
 

// Constraints:

// 1 <= s.length <= 1000
// s consists of English letters (lower-case and upper-case), ',' and '.'.
// 1 <= numRows <= 1000


#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
    if(numRows == 1)return s;  // if there is only one row then return the string as it is
    bool direction = 1;  // 1 for down and 0 for up 1 if top to bottom and 0 if bottom to top
    int i = 0, row = 0;  // i is the index of the string and row is the row number 
    vector<string> zigzag(numRows); // each row is a string if numsRow = 3 then s1, s2, s3

    while(true)  // loop until the string is completely traversed
    {
        if(direction == 1)  // if direction is 1 then go top to bottom
        {
            while(row < numRows && i < s.size())   // first iteration travel completely from 0 to numRows - 1
            {
                zigzag[row++].push_back(s[i++]);  // push the character into the string of the row and increment the row and index
            }
            row -= 2;  // decrement the row by 2 because we want to start from second last row and index starts from 0 so we need to decrement by 2
        }
        else
        {
            while(row >= 0 && i < s.size())   // if direction is 0 then go bottom to top and decrement the row while going up to 0
            {
                zigzag[row--].push_back(s[i++]);  // push the character into the string of the row and decrement the row and increment the index
            }
            row = 1;  // increment the row by 1 because we want to start from second row
        }

        if(i >= s.size())  // if the string is completely traversed then break the loop
        {
            break;
        }

        direction = !direction; // change the direction after each iteration
    }

    string ans = "";  
    for(int i = 0; i < zigzag.size(); i++)
    {
        ans += zigzag[i];  // concatenate all the strings of the rows
    }

    return ans; // return the concatenated string
}

int main()
{
    int T;
    cout <<"Enter the number of test cases: ";
    cin >> T;
    while(T--)
    {
        string s, numRows;
        cout << "Enter the string you need to convert into zigzag: ";
        cin >> s;
        cout << "After conversion the string would look like " << convert(s, numRows) << endl;
    }

    return 0;
}