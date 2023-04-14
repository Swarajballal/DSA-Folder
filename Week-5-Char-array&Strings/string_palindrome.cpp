#include <bits/stdc++.h>
using namespace std;

// length of the string
int len(char name[])
{
    int i = 0;
    int length = 0;

    while (name[i] != '\0')
    {
        i++;
        length++;
    }
    return length;
}

// Method 1: reverse the string and compare
// time complexity is O(n)
// space complexity is O(n)

// void reversestring(char name[])
// {
//     char reversename[100];
//     int length = len(name);
//     int j = 0;
//     for (int i = length - 1; i >= 0; i--)
//     {
//         reversename[j] = name[i];   // store last index of name in reversename first index and so on
//         j++;
//     }

//     for (int i = 0; i < length; i++)
//     {
//         if (name[i] != reversename[i])
//         {
//             cout << "Given input " << name << " is not a Palindrome";   // if any character is not same then it is not a palindrome
//             return;
//         }
//     }
//     cout << "Given input is a Palindrome";
// }

// better approach is to use two pointer approach
// time compleity with two pointer approach is O(n)
// space complexity is O(1)
// Mehtod 2: Two pointer approach
bool palindrome(char name[])
{
    int start = 0;
    int end = strlen(name) - 1;
    while (start <= end)
    {
        if (name[start] != name[end]) // if any character is not same then it is not a palindrome
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    char name[100];
    cout << "Enter a string: " << endl;
    cin.getline(name, 100);
    // Method 1: reverse the string and compare
    // reversestring(name);
    // Method 2: Two pointer approach
    if (palindrome(name))
    {
        cout << "Given input is a Palindrome";
    }
    else
    {
        cout << "Given input " << name << " is not a Palindrome";
    }
    return 0;
}