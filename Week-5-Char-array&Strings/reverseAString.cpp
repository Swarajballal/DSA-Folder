#include <bits/stdc++.h>
using namespace std;

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

void reversestring(char name[])
{
    int start = 0;
    int end = lengthstring(name) - 1;
    // or int end = strlen(name) - 1;  // pre-defined function
    while (start <= end)
    {
        swap(name[start], name[end]); // swap the characters
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