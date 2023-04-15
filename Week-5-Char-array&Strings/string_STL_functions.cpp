#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string name;
    // cout << "Enter your name: " << endl;
    // // cin >> name; // will only take the word untill it reaches the first null chanracter
    // getline(cin, name); // will take the whole line with spaces
    // cout << "Your name is: " << name << endl;
    // cout << "Length of your name is: " << name.length() << endl; // length() is a function of string class which returns the length of the string
    // if (name.empty() == 0)                                       // empty() is a function of string class which returns 1 if the string is empty and 0 if the string is not empty
    // {
    //     cout << "Your name is not empty" << endl;
    // }
    // else
    // {
    //     cout << "Your name is empty" << endl;
    // }
    // name.push_back('r'); // push_back() is a function of string class which adds a character at the end of the string similar to push_back() in vector
    // cout << "Your name after push back is: " << name << endl;
    // name.pop_back(); // pop_back() is a function of string class which removes a character from the end of the string similar to pop_back() in vector
    // cout << "Your name after pop back is: " << name << endl;
    // cout << "Substring of the name is: " << name.substr(0, 4) << endl; // subname() is a function of string class which returns a substring of the string from the starting index to the ending index
    // // sub+stringname(starting index, ending index)  syntax  important
    // // substr does not modify the original string
    // cout << "Original name is: " << name << endl;
    // string name2;
    // cout << "Enter your name2: " << endl;
    // getline(cin, name2);
    // if (name.compare(name2) != 0) // compare() is a function of string class which compares two strings and returns 0 if both are equal, 1 if the first string is greater than the second string and -1 if the first string is smaller than the second string
    // {
    //     cout << "Both the names are not equal" << endl;
    // }
    // else
    // {
    //     cout << "Both the names are equal" << endl;
    // }
    // string name3;
    // string name4;
    // cout << "Enter your name3: " << endl;
    // cin >> name3;
    // cout << "Enter your name4: " << endl;
    // cin >> name4;
    // cout << name3.compare(name4) << endl;
    // if compare() returns 0 then both the strings are equal
    // if compare() returns 1 then the first string is greater than the second string at some index if equal at some index then it moves to next index
    // if compare() returns -1 then the first string is smaller than the second string at some index if equal at some index then it moves to next index
    // string sentence = "Swaraj is a Good boy";
    // string find_word = "Bad";
    // // if the find_word is not present in the sentence then it returns npos which is a constant static value with the highest possible value for an element of type size_t(stdcc, limits or any header file mentioned value) and it is defined with -1.
    // if (sentence.find(find_word) == string::npos) // string::npos to access the npos value important
    // {
    //     cout << "Word not found" << endl;
    // }
    // else
    // {
    //     cout << find_word << " is at index " << sentence.find(find_word) << endl; // find() is a function of string class which returns the index of the first occurence of the word in the string or the first character position of find_word
    //     // it also count spaces hence swaraj is 0 to 5 then space 6 then 'is' 7 to 8 then space 9 a is 10 and space is 11 next is GOOD which is 12
    // }
    // string sentence2 = "Finish what you started";
    // string find_word2 = "how";
    // // by making a string variable and then using the replace() function we can replace the word in the string
    // sentence2.replace(7, 4, find_word2); // replace() is a function of string class which replaces the word from the starting index to the ending index with the find_word2
    // replace() function does not modify the original string
    // replace function in C++ string does not modify the original string. Instead, it returns a new string that is a copy of the original string with the specified substring replaced by another substring.
    // cout << sentence2 << endl;
    // // directly using the replace() function and passing the string as a parameter
    // sentence2.replace(15, 7, "start");
    // // first parameter is the starting index of the word to be replaced second parameter is the no of words present in the word you are trying to replace third parameter is the word you want to replace with
    // cout << sentence2 << endl;
    string sentence3 = "Swaraj is a Bad is a Good Boy!!";
    sentence3.erase(12, 9); // first parameter is the starting index of the word to be erased second parameter is the no of words present in the sentence you are trying to erase
    // erase() function modifies the original string
    cout << sentence3 << endl;
}