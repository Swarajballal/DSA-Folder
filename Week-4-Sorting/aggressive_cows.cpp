// Aggressive Cows
// MediumAccuracy: 59.57%Submissions: 21K+Points: 4
// Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

// You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
// The first line of input contains two space-separated integers n and k.
// The second line contains n space-separated integers denoting the position of the stalls.

// Example 1:

// Input:
// n=5 
// k=3
// stalls = [1 2 4 8 9]
// Output:
// 3
// Explanation:
// The first cow can be placed at stalls[0], 
// the second cow can be placed at stalls[2] and 
// the third cow can be placed at stalls[3]. 
// The minimum distance between cows, in this case, is 3, 
// which also is the largest among all possible ways.
// Example 2:

// Input:
// n=5 
// k=3
// stalls = [10 1 2 7 5]
// Output:
// 4
// Explanation:
// The first cow can be placed at stalls[0],
// the second cow can be placed at stalls[1] and
// the third cow can be placed at stalls[4].
// The minimum distance between cows, in this case, is 4,
// which also is the largest among all possible ways.
// Your Task:
// Complete the function int solve(), which takes integer n, k, and a vector stalls with n integers as input and returns the largest possible minimum distance between cows.

// Expected Time Complexity: O(n*log(10^9)).
// Expected Auxiliary Space: O(1).

// Constraints:
// 2 <= n <= 10^5
// 2 <= k <= n
// 0 <= stalls[i] <= 10^9


#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int sol) // to check if it is possible to place k cows with minimum distance sol
{
    int c = 1;           // to count the number of cows placed starting from the first cow
    int pos = stalls[0]; // first cow is placed at the first stall
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= sol) // if the distance between the current stall and the last placed cow is greater than or equal to the minimum distance then place the cow at the current stall
        {
            c++;             // increase the count of cows placed
            pos = stalls[i]; // update the position of the last placed cow
        }
        if (c == k)
            return true; // if the number of cows placed is equal to k then return true
    }
    return false; // if the number of cows placed is less than k then return false
}

int solve(int n, int k, vector<int> &stalls)
{

    sort(stalls.begin(), stalls.end());                         // if not sorted then sort it
    int start = 0, end = stalls[stalls.size() - 1] - stalls[0]; // to get a range for minimum distance possible so start = 0 and end = last element - first element
    int ans = -1;                                               // to store the answer
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(stalls, k, mid)) // if it is possible to place k cows with minimum distance mid then we will try to increase the distance
        {
            ans = mid;       // store the answer
            start = mid + 1; // increase the distance see if we can get a better answer since we want the maximum possible distance
        }
        else
        {
            end = mid - 1; // if it is not possible to place k cows with minimum distance mid then we will try to decrease the distance
        }
    }
    return ans;
}

int main()
{
    // vector<int> stalls = {1, 2, 4, 8, 9};
    vector<int> stalls = {10, 1, 2, 7, 5};
    int n = stalls.size();
    int k = 3;
    int ans = solve(n, k, stalls);
    cout << "The Minimum distance between any two of them is the maximum possible: " << ans << endl;
    return 0;
}
