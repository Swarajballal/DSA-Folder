#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    cout<<"Enter a name: ";
    cin >> name;
    int start = 0;
    int end = strlen(name)-1;
    while(start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
    for(int i = 0; i < strlen(name); i++)
        cout << name[i];
    return 0;
}