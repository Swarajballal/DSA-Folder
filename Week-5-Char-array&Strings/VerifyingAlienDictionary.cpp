// 953. Verifying an Alien Dictionary
// Solved
// Easy
// Topics
// Companies
// In an alien language, surprisingly, they also use English lowercase letters, but possibly in a different order. The order of the alphabet is some permutation of lowercase letters.

// Given a sequence of words written in the alien language, and the order of the alphabet, return true if and only if the given words are sorted lexicographically in this alien language.

 

// Example 1:

// Input: words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
// Output: true
// Explanation: As 'h' comes before 'l' in this language, then the sequence is sorted.
// Example 2:

// Input: words = ["word","world","row"], order = "worldabcefghijkmnpqstuvxyz"
// Output: false
// Explanation: As 'd' comes after 'l' in this language, then words[0] > words[1], hence the sequence is unsorted.
// Example 3:

// Input: words = ["apple","app"], order = "abcdefghijklmnopqrstuvwxyz"
// Output: false
// Explanation: The first three characters "app" match, and the second string is shorter (in size.) According to lexicographical rules "apple" > "app", because 'l' > '∅', where '∅' is defined as the blank character which is less than any other character (More info).
 

// Constraints:

// 1 <= words.length <= 100
// 1 <= words[i].length <= 20
// order.length == 26
// All characters in words[i] and order are English lowercase letters.


#include<bits/stdc++.h>
using namespace std;


bool isAlienSorted(vector<string>& words, string order) {
    unordered_map<char, int> mp;
    // create a map of the order of the characters  like mp ={ 'h': 0, 'l': 1, 'a': 2, 'b': 3, 'c': 4, 'd': 5, 'e': 6, 'f': 7, 'g': 8, 'i': 9, 'j': 10, 'k': 11, 'm': 12, 'n': 13, 'o': 14, 'p': 15, 'q': 16, 'r': 17, 's': 18, 't': 19, 'u': 20, 'v': 21, 'w': 22, 'x': 23, 'y': 24, 'z': 25}

    for(int i = 0; i < order.size(); i++)
    {
        mp[order[i]] = i;   // mp[order[i]] = i will create a map of the order of the characters like above.
    }

    for(int i = 0; i < words.size() - 1; i++)   // for each word in the words array
    {
        string w1 = words[i];   // w1 = words[i] for ith word
        string w2 = words[i+1];   // w2 = words[i+1] for (i+1)th word

        int n = min(w1.size(), w2.size());   // minimum of the size of the two words

        for(int j = 0; j < n; j++)
        {
            if(mp[w1[j]] < mp[w2[j]])      // if the order of the characters in the first word is less than the order of the characters in the second word then break that means the words are sorted lexicographically in this alien language. like in the first example "hello" and "leetcode" the order of the characters in the first word is less than the order of the characters in the second word then break that means the words are sorted lexicographically in this alien language. here 'h' in map is 0 and 'l' in map is 1 so 0 < 1 so break.
            {
                break;
            }
            
            if(mp[w1[j]] > mp[w2[j]])   // if the order of the characters in the first word is greater than the order of the characters in the second word then return false that means the words are not sorted lexicographically in this alien language. like in the second example "word" and "world" the order of the characters in the first word is greater than the order of the characters in the second word then return false that means the words are not sorted lexicographically in this alien language. here 'd' in map is 5 and 'l' in map is 1 so 5 > 1 so return false.
            {
                return false;
            }

            if(j == n-1 && w1.size() > w2.size()) // if the size of the first word is greater than the size of the second word then return false that means the words are not sorted lexicographically in this alien language. like in the third example "apple" and "app" the size of the first word is greater than the size of the second word then return false that means the words are not sorted lexicographically in this alien language.
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int T;
    cout << "Enter the number of test cases: "<<endl;
    cin >> T;

    while(T--)
    {
        int n;
        cout << "Enter the number of words: "<< endl;
        cin >> n;
        vector<string> words(n, "");
        cout << "Enter the words "<<endl;
        for(int i = 0; i < n; i++)
        {
            cout << "Enter the "<< i+1 << "th word: ";
            cin >> words[i];
        }
        string order;

       if(isAlienSorted(words, order))
        {
            cout << "The words are sorted lexicographically in this alien language."<<endl;
        }
        else
        {
            cout << "The words are not sorted lexicographically in this alien language."<<endl;
        } 
    }

    return 0;
}