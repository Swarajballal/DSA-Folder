// 14. Longest Common Prefix
// Solved
// Easy
// Topics
// Companies
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.

// Time Complexity: O(n * m) where n is the number of strings and m is the length of the longest string


string longestCommonPrefix(vector<string>& strs) {
    string ans;  // empty string initially
    int i = 0;  // index of the character
    while(true) {  // infinite loop while it breaks when the common prefix is found
        char curr_ch = 0;  // initially no character null character "\0"
        for(auto &str : strs) {  // for each string in the vector of strings
            if(i >= str.size())   // see if the index is out of bound for any string
            {
                return ans;  // if yes, return the current prefix
            }
            if(curr_ch == 0) {  // if the current character is null that means characters of first string will stored in curr_ch to compare with other strings
                curr_ch = str[i];  // store the character of the first string in curr_ch it could be 1st letter of first string or 2nd letter of first string etc till the common prefix is found
            }
            else if(curr_ch != str[i]) {  // if character of next strings are not equal to the characters stored in curr_ch then return the current prefix since all common characters are found
                return ans;
            }
        }
            ans.push_back(curr_ch);  // if the character is common then push it to the answer string since no condition from above is satisfied
            i++; // increment the index to check the next character
        }
        return ans;  // return the answer string
    }


// Another similar approach  see notebook for explanation

//  string longestCommonPrefix(vector<string>& strs) {
//         string ans;
//         int i = 0;
//         while(true) {
//             char curr_ch = 0;
//             for(auto str : strs) {
//                 if(i >= str.size()){
//                     curr_ch = 0;
//                     break;
//                 }
//                 if(curr_ch == 0) {
//                     curr_ch = str[i];
//                 }
//                 else if(str[i] != curr_ch){
//                     curr_ch = 0;
//                     break;
//                 }
//             }
//             if(curr_ch == 0)
//             {
//                 break;
//             }
//             ans.push_back(curr_ch);
//             i++;
//         }
//         return ans;
//     }


#include<bits/stdc++.h>
#include<vector>
using namspace std;

int main()
{
    int T;
    cout << "Enter the number of testcases : ";
    cin >> T;
    while(T--)
    {
        int n;
        cout << "Enter the number of strings : ";
        cin >> n;
        vector<string> strs(n);

        for(int i = 0; i < n; i++)
        {
            cout << "Enter the "<<i + 1 << " th string: ";
            cin >> strs[i]; 
        }

        cout << "Longest Common Prefix is : " << longestCommonPrefix(strs) << endl;
    } 
    return 0;
}
