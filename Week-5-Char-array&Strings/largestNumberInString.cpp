
// 179. Largest Number
// Solved
// Medium
// Topics
// Companies
// Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

// Since the result may be very large, so you need to return a string instead of an integer.

 

// Example 1:

// Input: nums = [10,2]
// Output: "210"
// Example 2:

// Input: nums = [3,30,34,5,9]
// Output: "9534330"
 

// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 109



#include<bits/stdc++.h>
using namespace std;

// // comparator function to sort the string array
// static bool cmp(string &a, string &b)
// {
//     return (a+b) >= (b+a); // if a+b is greater than or equal to b+a then return true and dont swap
//     // if a+b is less than b+a then return false and swap the elements in the array
// }

// string largestNumber(vector<int>& nums)
// {
//     // Brute force method
//     // step 1: find if all digits are 0's
//     int x = 0;  // initial count of 0's
//     for(int i = 0; i < nums.size(); i++)
//     {
//         if(nums[i] == 0)
//         {
//             x++; // increment the count of 0's
//         }
//     }

//     if(x == nums.size()) return "0";  // if all digits are 0's then return 0

//     // step 2: convert the integer array to string array

//     vector<string> strArr(nums.size(), "");

//     // convert the integer array to string array and store it in strArr

//     for(int i = 0; i < nums.size(); i++)
//     {
//         strArr[i] = to_string(nums[i]);  // to_string() function converts integer to string
//     }

//     // step 3: sort the string using custom comparator
//     sort(strArr.begin(), strArr.end(), cmp);

//     // step 4: concatenate the sorted string array and return the result

//     string result = "";

//     for(int i = 0; i < strArr.size(); i++)
//     {
//         result += strArr[i];
//     }

//     return result;
// }

string largestNumber(vector<int>& nums)
{
    auto cmp = [&](int a , int b)
        {
            return (to_string(a) + to_string(b)) > (to_string(b) + to_string(a));
        };

        sort(nums.begin(), nums.end(), cmp);

        string ans = "";

        for(auto it: nums)
        {
            ans += to_string(it);
        }

        return ans[0] == '0' ? "0" : ans; // if all the elements are 0's then return 0
}


int main()
{
    int T;
    cout <<"Enter the number of test cases: "<< endl;
    cin >> T;
    while(T--)
    {
        int n;
        cout << "Enter the size of the array: "<< endl;
        cin >> n;
        vector<int> numberArr(n);

        for(int i = 0; i < n; i++)
        {
            cout << "Enter the " << i << "th element: "<< endl;
            cin >> numberArr[i];
        }

        cout << largestNumber(numberArr) <<endl;
    }

    return 0;
}