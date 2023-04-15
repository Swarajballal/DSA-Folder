#include <bits/stdc++.h>
using namespace std;

string removeAllDuplicates(string str)
{
    string ans = "";                       // empty string to store answer
    for (int i = 0; i < str.length(); i++) // traverse the original string
    {
        if (ans.length() > 0) // if the answer string is not empty
        {
            if (ans[ans.length() - 1] == str[i]) // if the answer string's last character is same as the current character in the original string then remove the last character from the answer string
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(str[i]); // if the answer string's last character is not same as the current character in the original string then add the current character to the answer string
            }
        }
        else // if the answer string is empty then add character from the original string
        {
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main()
{
    // string str = "abbaca";
    string str = "azxxzy";
    string result = removeAllDuplicates(str);
    cout << "Resultant string after removing adjacent duplicates is: " << result;
    return 0;
}