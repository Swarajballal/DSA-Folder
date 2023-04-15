#include <bits/stdc++.h>
using namespace std;

int stringlength(char name[])
{
    int i = 0;
    int len = 0;
    while (name[i] != '\0')
    {
        i++;
        len++;
    }
    return len;
}

void uppercasechar(char name[])
{
    int length = stringlength(name);
    for (int i = 0; i < length; i++)
    {
        name[i] = name[i] + 'a' - 'A';
    }

    cout << "The name in lowercase is: ";
    for (int i = 0; i < length; i++)
    {
        cout << name[i];
    }
}

int main()
{
    char name[100];
    cout << "Enter the name in Capital letters: ";
    cin.getline(name, 100);
    uppercasechar(name);
    return 0;
}