#include <bits/stdc++.h>
using namespace std;

// total time complexity: O(n) + O(n) = O(2n) = O(n)
// total space complexity: O(1) + O(1) = O(2) = O(1)
// instead of using the pre-defined function strlen() we can write our own function to find the length of the string
// O(n) time complexity for stringlength()
int stringlength(char name[])
{
    int i = 0;
    int len = 0;            // length of the string
    while (name[i] != '\0') // if the character is not null
    {
        len++;
        i++;
    }
    return len;
}

// O(n) time complexity for replacefunction()
void replacefunction(char name[])
{
    int length = stringlength(name);
    for (int i = 0; i < length; i++) // strlen is the pre-defined function to find the length of the string
    {
        if (name[i] == ' ') // if the character is a space
        {
            name[i] = '@'; // replace the null character with @
        }
    }
}

int main()
{
    char name[100];
    cout << "Enter a name: ";
    cin.getline(name, 100); // gteline is used to take the input of the string with spaces else cin will take the input till the first space that will be wrong
    replacefunction(name);
    int lenght = stringlength(name);
    cout << "Replacing the spaces with @: ";
    for (int i = 0; i < strlen(name); i++)
        cout << name[i];
    return 0;
}