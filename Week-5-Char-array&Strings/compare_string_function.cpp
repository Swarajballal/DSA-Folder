#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name1;
    string name2;
    cout << "Enter name1: ";
    cin >> name1;
    cout << "Enter name2: ";

    cin >> name2;

    if (name1.length() != name2.length()) // to check if both string are of same length or not
    {
        cout << name1 << " and " << name2 << " are not same"; // if not same then print not same
        return 0;                                             // to terminate the program
    }

    for (int i = 0; i < name2.length(); i++) // since both are of same length i can use one for loop and go till anyones length either of name1 or name2
    {
        if (name1[i] != name2[i]) // if any of the characters are not same then print not same
        {
            cout << name1 << " and " << name2 << " are not same";
            return 0; // to terminate the program
        }
    }

    cout << name1 << " and " << name2 << " are same"; // if all the characters are same then print same

    return 0;
}