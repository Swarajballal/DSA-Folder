#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    cin >> name;
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }

    cout << "Length of string is " << i << endl;
    
    // OR
    cout << "Length of string is " << strlen(name) << endl;
}