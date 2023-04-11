#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    cin >> ch; // cin only reads till it finds space/tab/newline or null as soon as we enter first name it ends there so last name is not printed if 20 then garbage value is filled.
    for (int i = 0; i < 20; i++)
    {
        cout << "letter " << i << " = " << ch[i] << endl;
    }

    // solution

    // cin.getline(ch, 100); // reads till it finds newline or null here 100 is the size of array
    // in getline we can specify our own delimiter, delimiter is the character which tells cin to stop reading here in above case delimiter is enter or newline
    return 0;
}