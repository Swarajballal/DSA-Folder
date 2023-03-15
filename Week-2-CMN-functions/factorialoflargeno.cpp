#include <bits/stdc++.h>
using namespace std;

vector<int> factorial(int N)
{
    vector<int> ans;             // vector to store the result
    ans.push_back(1);            // starting with 1 for multiplication
    int carry = 0;               // carry for multiplication initially 0
    for (int i = 2; i <= N; i++) // from 2 because we have already stored 1 in ans
    {
        for (int j = 0; j < ans.size(); j++)   //on ans we are moving from j = 0 instead of end like regular manual multiplication so we have to reverse at the end of ans
        {
            int product = ans[j] * i + carry;   // product of ans[j] and i with carry
            ans[j] = product % 10;  // storing the last digit of product in ans[j] 
            carry = product / 10;  // storing the carry for next multiplication
        }

        while(carry) //while because carry can be more than 1 digit
        {
            ans.push_back(carry%10);   // storing the last digit of carry in ans
            carry = carry/10;  // again storing the carry for next multiplication
        }

    }
    reverse(ans.begin(), ans.end());  // reversing the ans vector
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number to find factorial for : ";
    cin >> num;
    vector<int> result = factorial(num);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    return 0;
}