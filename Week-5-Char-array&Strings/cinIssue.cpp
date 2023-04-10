#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    cin >> ch; // cin only reads till it finds space or null as soon as we enter first name it ends there so last name is not printed if 20 then garbage value is filled.
    for (int i = 0; i < 20; i++)
    {
        cout << "letter " << i << " = " << ch[i] << endl;
    }
    return 0;
}