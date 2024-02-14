//     524. Longest Word in Dictionary through Deleting LeetCode
// Solved
// Medium
// Topics
// Companies
// Given a string s and a string array dictionary, return the longest string in the dictionary that can be formed by deleting some of the given string characters. If there is more than one possible result, return the longest word with the smallest lexicographical order. If there is no possible result, return the empty string.

 

// Example 1:

// Input: s = "abpcplea", dictionary = ["ale","apple","monkey","plea"]
// Output: "apple"
// Example 2:

// Input: s = "abpcplea", dictionary = ["a","b","c"]
// Output: "a"
 

// Constraints:

// 1 <= s.length <= 1000
// 1 <= dictionary.length <= 1000
// 1 <= dictionary[i].length <= 1000
// s and dictionary[i] consist of lowercase English letters.
    
    
    
    
    
    
    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;


    // // Method 1: Using custom comparator of sort function
    // // Time Complexity: O(n*x + mlogm) where n is the length of the dictionary and m is the length of the string

    // static bool cmp(string &a, string &b) // Custom comparator function to sort the dictionary in descending order of length and lexicographically if length is same ascending order for lexicographically
    // {
    //     if(a.length() != b.length()) // If the length of the two strings are different then return the string with larger length
    //         return a.length() > b.length();  // here > will arrange the string in descending order of length

    //     return a < b;  // here < will arrange the string in ascending order of lexicographically that means a will come before b.
    // }


    // bool isSubsequence(string s, string str)
    // {
    //     int i = 0, j = 0; // i for the string and j for the word
    //     while(i < s.length() && j < str.length())  // Traverse the string and the word until the end of the string or the word
    //     {
    //         if(s[i] == str[j])j++;  // if the character of the string and the word are same then increment the word pointer
    //         i++;  // Increment the string pointer in each iteration
    //     } 
    //     return j == str.length();  // If the word pointer is at the end of the word and j is equal to the length of the word then return true else return false
    // }

    // string findLongestWord(string s, vector<string>& dictionary)
    // {
    //     string result = ""; // To store the result string else return empty string
    //     sort(dictionary.begin(), dictionary.end(), cmp);   // Sort the dictionary in descending order of length and lexicographically if length is same ascending order for lexicographically

    //     for(string str : dictionary)  // For each word in the dictionary
    //     {
    //         if(isSubsequence(s, str)) // If the word is subsequence of the given string
    //             return result = str; // Return the word
    //     }
    //     return result; // Return the result
    // }


    // Method 2: Without using custom comparator of sort function
    // Time Complexity: O(n*x) where n is the length of the dictionary and x is the length of the string

     bool isSubsequence(string s, string str)
    {
        int i = 0, j = 0; // i for the string and j for the word
        while(i < s.length() && j < str.length())  // Traverse the string and the word until the end of the string or the word
        {
            if(s[i] == str[j])j++;  // if the character of the string and the word are same then increment the word pointer
            i++;  // Increment the string pointer in each iteration
        } 
        return j == str.length();  // If the word pointer is at the end of the word and j is equal to the length of the word then return true else return false
    }

      string findLongestWord(string s, vector<string>& dictionary)
    {
        string result = ""; // To store the result string else return empty string

        for(string str : dictionary)  // For each word in the dictionary
        {
            if(isSubsequence(s, str)) {
                if(str.length() > result.length() || (str.length() == result.length()) && str < result) // If the word is subsequence of the given string and the length of the word is greater than the length of the result string or the length of the word is same as the length of the result string and the word is lexicographically smaller than the result string
                    result = str; // Update the result string with the word (if the above condition is true then update the result string else keep the result string as it is)
            }
        }
        return result; // Return the result
    }



    int main()
    {
        int T;
        cout << "Enter the number of test cases: ";
        cin >> T;

        while(T--)
        {
            string s;
            cout << "Enter the string: ";
            cin >> s;
            int n;
            cout << "Enter the number of words in the dictionary: ";
            cin >> n;
            vector<string> dictionary(n);
            
            for(int i = 0; i < n; i++)
            {
                cout << "Enter the "<< i+1 << "th word: ";
                cin >> dictionary[i];
            }

            string result = findLongestWord(s, dictionary);
            if(result == "")
                cout << "No word can be formed by deleting some characters of the given string." << endl;
            else
            cout << "The longest word in the dictionary that can be formed by deleting some characters of the given string is: " << findLongestWord(s, dictionary) << endl;
        }  
        return 0; 
    }