#include <bits/stdc++.h>
using namespace std;

// Method 1: Using Difference Array and sort and return the first k elements   not a good approach
//  brute force approach where we find differnce of x with all the elements and then sort them  according to difference and then print the first k elements

// vector<int> findKClosestEle(vector<int> &v, int n, int x, int k)
// {
//     vector<int> result;
//     vector<pair<int, int>> ans;   // will store the difference and the element
//     int diff = 0;
//     for (int i = 0; i < n; i++)
//     {
//         diff = abs(x - v[i]);   // find the difference
//         ans.push_back({diff, v[i]});   // push the difference and the element in the vector
//     }
//     sort(ans.begin(), ans.end());   // sort the vector according to the difference

//     for (int i = 0; i < k; i++)
//     {
//         result.push_back(ans[i].second);  // push the first k elements in the result vector
//     }
//    sort(result.begin(), result.end()); // sort the result vector
//     return result;
// }

// int main()
// {
//     // vector<int> v{1, 2, 3, 4, 5};
//     vector<int> v{12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
//     int k = 4;
//     int x = 35;
//     int n = v.size();
//     vector<int> ans = findKClosestEle(v, n, x, k);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// Method 2: Using 2 pointer approach
// see notebook for dry run example

vector<int> findKClosestEle(vector<int> &arr, int k, int x)
{
    int low = 0, high = arr.size() - 1;
    // vector<int> ans;
    while (high - low >= k) // if the difference between high and low is greater than or equal to k then we will move the pointers when less then k we stop that will be our answer array
    {
        if (x - arr[low] > arr[high] - x) // if the difference of x with low is greater than the difference of x with high then we will move the low pointer the less the difference the more the closeness
        {
            low++;
        }
        else
        {
            high--; // else we will move the high pointer   close the gap till high - low is greater than equalto  k
        }
    }

    // for (int i = low; i <= high; i++)    // space complexity will be O(k) as we are creating a new array of size k
    // {
    //     ans.push_back(arr[i]);
    // }

    // return ans;

    // instead we can do this    // space complexity will be O(1) as we are not creating a new array

    return vector<int>(arr.begin() + low, arr.begin() + high + 1); // this will return the vector from low to high index + 1 because the end index is not included since condition breaks when high - low is less than k so h we need is 1 more than the high index
}

int main()
{
    // vector<int> v{1, 2, 3, 4, 5};
    vector<int> v{12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    int k = 4;
    int x = 35;
    vector<int> ans = findKClosestEle(v, k, x);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
