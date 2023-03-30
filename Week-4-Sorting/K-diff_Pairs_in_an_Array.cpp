// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

// A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

// 0 <= i, j < nums.length
// i != j
// nums[i] - nums[j] == k
// Notice that |val| denotes the absolute value of val.

// Example 1:

// Input: nums = [3,1,4,1,5], k = 2
// Output: 2
// Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
// Although we have two 1s in the input, we should only return the number of unique pairs.
// Example 2:

// Input: nums = [1,2,3,4,5], k = 1
// Output: 4
// Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).
// Example 3:

// Input: nums = [1,3,1,5,4], k = 0
// Output: 1
// Explanation: There is one 0-diff pair in the array, (1, 1).

// Constraints:

// 1 <= nums.length <= 104
// -107 <= nums[i] <= 107
// 0 <= k <= 107

#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(nlogn) + O(n) = O(nlogn) space complexity: O(1)

// Withh Duplicate pairs

// int findKDiffPairs(vector<int> &nums, int n, int k)
// {
//     sort(nums.begin(), nums.end()); // first sort the array for better performance
//     int i = 0, j = 1, count = 0;    // count is the number of pairs

//     while (j <= n) // do untill j is less than n or j does not go out of bound
//     {
//         int diff = nums[j] - nums[i]; // diff will always be positive since we array sorted so j will always be greater than i

//         if (diff == k) // if diff is equal to k then we have found a pair
//         {
//             cout << nums[i] << " " << nums[j] << endl;
//             count++;
//             i++;
//             j++; // increment i and j count++ to find more pairs
//         }

//         else if (diff > k) // if e difference is greater than k that means we need to decrease the difference so we will increment i the gap between i and j will decrease
//         {
//             i++;
//         }

//         else // if the differnce is less than k that means we need to increase the difference so we will increment j the gap between i and j will increase
//         {
//             j++;
//         }

//         if (i == j) // to avoid the case when i and j are at same position 1-1, 2-2-, 3-3 etc
// also it is not in else if because it wont check this everytime if statement is true for diff == k hence we wrote If again so that it checks everytime. and after checking all if else else if
//         {
//             j++;
//         }
//     }
//     return count;
// }

// Without Duplicate pairs

int findKDiffPairs(vector<int> &nums, int n, int k)
{
    sort(nums.begin(), nums.end()); // first sort the array for better performance
    int i = 0, j = 1, count = 0;
    set<pair<int, int>> ans; // will store pairs that are unique hence set is used

    while (j <= n) // do untill j is less than n or j does not go out of bound
    {
        int diff = nums[j] - nums[i]; // diff will always be positive since we array sorted so j will always be greater than i

        if (diff == k) // if diff is equal to k then we have found a pair
        {
            cout << nums[i] << " " << nums[j] << endl;
            ans.insert({nums[i], nums[j]}); // insert the pair in set
            i++;
            j++; // increment i and j count++ to find more pairs
        }

        else if (diff > k) // if e difference is greater than k that means we need to decrease the difference so we will increment i the gap between i and j will decrease
        {
            i++;
        }

        else // if the differnce is less than k that means we need to increase the difference so we will increment j the gap between i and j will increase
        {
            j++;
        }

        if (i == j) // to avoid the case when i and j are at same position 1-1, 2-2-, 3-3 etc
        {
            j++;
        }
    }
    return ans.size(); // no of unique pairs is equal to size of set or no of pairs in set present
}

int main()
{
    // vector<int> nums{3, 1, 4, 1, 5};
    vector<int> nums{1, 1, 1, 1, 1};
    int k = 0;
    int n = nums.size();
    int no_of_pairs = findKDiffPairs(nums, n, k);
    cout << "No of pairs: " << no_of_pairs << endl;
    return 0;
}