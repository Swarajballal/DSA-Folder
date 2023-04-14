#include <bits/stdc++.h>
using namespace std;

// space complexity: O(1) since we are not using any extra space for both the functions
// O(n) time complexity for lengthstring()
int lengthstring(char name[])
{
    int i = 0;              // i is the index of the string
    while (name[i] != '\0') // if character is not null
    {
        i++; // increment the index
    }
    return i; // return the length of the string
}

// two pointer approach

// time complexity: O(n/2) = O(n) since it is running till start <= end which is n/2
void reversestring(char name[])
{
    int start = 0;
    int end = lengthstring(name) - 1;
    // or int end = strlen(name) - 1;  // pre-defined function
    while (start <= end)
    {
        swap(name[start], name[end]); // swap the characters    // n/2 swaps == O(n)
        start++;                      // increment the start index
        end--;                        // decrement the end index
    }
}

int main()
{
    char name[100]; // 100 is the maximum length of the string
    cout << "Enter a name: ";
    cin >> name;
    reversestring(name);
    for (int i = 0; i < strlen(name); i++)
        cout << name[i];
    return 0;
}