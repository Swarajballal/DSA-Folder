// 49. Group Anagrams
// Medium
// Topics
// Companies
// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
// Example 2:

// Input: strs = [""]
// Output: [[""]]
// Example 3:

// Input: strs = ["a"]
// Output: [["a"]]
 

// Constraints:

// 1 <= strs.length <= 104
// 0 <= strs[i].length <= 100
// strs[i] consists of lowercase English letters.


#include<bits/stdc++.h>
using namespace std;
// Method 1: Using sorting and creating a map 
// vector<vector<string>> groupAnagrams(vector<string>& strs) {

//     map<string, vector<string>> hash;
//     for(auto str : strs)
//     {
//         string temp = str;
//         sort(temp.begin(), temp.end());
//         hash[temp].push_back(str);
//     }

//     vector<vector<string>> ans;

//     for(auto it : hash)
//     {
//         ans.push_back(it.second);
//     }
//     return ans;
// }

// Method 2: Not using sort function and using custome hash map. check the notes to understand the logic

 std::array<int, 256>   Myhash(string strs)   // creating hash map for key
    {
        std::array<int, 256> hash = {0}; // initialize the hash map all values int typecasted for all ASCII values as 0
        for(int i = 0 ; i < strs.size(); i++)
        { 
            hash[strs[i]]++;   // increment the value of the index of the character in the hash map
        }

        return hash;  // return the hash of characters that are present in the string with their incremented count values.
    }

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    map<std::array<int, 256>, vector<string>> mp; 
      // create a map of a hash of 256 size array as key and vector of strings as value
    
    for(auto str : strs)
    {
        mp[Myhash(str)].push_back(str);   // push the string into the vector of strings of the hash key
        // for example e-1 a-1 t-1 will be the hash key for eat, tea, ate so e-1 a-1 t-1 we will get from the hash function and push the corresponding string into the vector of strings with same hash key
    }
    
     vector<vector<string>> ans;

    for(auto it = mp.begin(); it != mp.end(); it++)  // iterate through the map and push the vector of strings into the ans vector
    {
        ans.push_back(it -> second);   // second of map will consist of vector of strings
    }
    return ans;  // [ [eat, tea, ate], [bat], [tan, nat] ]
} 

int main()
{
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;

    while(T--)
    {
        int n;
        cout << "Enter the number of strings: ";
        cin >> n;
        vector<string> strs(n);
        for(int i = 0; i < n; i++)
        {
            cout << "Enter the "<< i + 1 << "th string: ";
            cin >> strs[i];
        }

        vector<vector<string>> result = groupAnagrams(strs);
         cout << "The groups of anagrams are: " << endl;

         for(auto group : result)
         {
            cout << "[";
            for(auto str : group)
            {
                cout << str << ",";
            }
            cout << "]";
         }
    }
    return 0;
}