#include <bits/stdc++.h>
using namespace std;

void findallsubstr(string str)
{
    for (int i = 0; i < str.length(); i++) // i is the starting index of the substring
    {
        for (int j = 1; j <= str.length() - i; j++) // j is the length of the substring  length - i because we dont want to go out of the string
        {
            cout << str.substr(i, j) << endl; // printing the substring
        }
    }
}

int main()
{
    string str = "abc";
    findallsubstr(str);
    return 0;
}