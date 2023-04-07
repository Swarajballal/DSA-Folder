// The Painter's Partition Problem-II
// HardAccuracy: 27.52%Submissions: 61K+Points: 8
// Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!

// Dilpreet wants to paint his dog's home that has n boards with different lengths. The length of ith board is given by arr[i] where arr[] is an array of n integers. He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board.

// The problem is to find the minimum time to get this job done if all painters start together with the constraint that any painter will only paint continuous boards, say boards numbered {2,3,4} or only board {1} or nothing but not boards {2,4,5}.

// Example 1:

// Input:
// n = 5
// k = 3
// arr[] = {5,10,30,20,15}
// Output: 35
// Explanation: The most optimal way will be:
// Painter 1 allocation : {5,10}
// Painter 2 allocation : {30}
// Painter 3 allocation : {20,15}
// Job will be done when all painters finish
// i.e. at time = max(5+10, 30, 20+15) = 35
// Example 2:

// Input:
// n = 4
// k = 2
// arr[] = {10,20,30,40}
// Output: 60
// Explanation: The most optimal way to paint:
// Painter 1 allocation : {10,20,30}
// Painter 2 allocation : {40}
// Job will be complete at time = 60

// Your task:
// Your task is to complete the function minTime() which takes the integers n and k and the array arr[] as input and returns the minimum time required to paint all partitions.

// Expected Time Complexity: O(n log m) , m = sum of all boards' length
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ n ≤ 105
// 1 ≤ k ≤ 105
// 1 ≤ arr[i] ≤ 105

// check the notebook for dry run and also check book allocation problem because it is 100% similar to this problem 

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSol(int arr[], int n, int k, long long sol)
{
    long long timeSum = 0; // timeSum is the time taken by the current painter to paint the boards
    int painter = 1;       // number of painters required to paint the boards
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sol) // if a board's length is greater than the time given to the painter, then it is not possible to paint all boards in the given time
        {
            return false;
        }

        if (timeSum + arr[i] > sol) // if the time taken by the current painter to paint the boards is greater than the time given to the painter, then we need to increase the number of painters
        {
            painter++;        // increase the number of painters
            timeSum = arr[i]; // reset the timeSum to the time taken by the current painter to paint the current board
            if (painter > k)  // if the number of painters is greater than the number of painters given, then it is not possible to paint all boards in the given time
            {
                return false;
            }
        }
        else
        {
            timeSum += arr[i]; // if the time taken by the current painter to paint the boards is less than the time given to the painter, then we can increase the timeSum
        }
    }
    return true; // if all boards can be painted in the given time, then return true
}

long long minTime(int arr[], int n, int k)
{
    if (k > n) // if number of painters is greater than number of boards
    {
        return -1;
    }
    long long start = 0, end;
    long long ans = -1;
    for (int i = 0; i < n; i++)
    {
        end += arr[i]; // sum of all boards' length
    }

    while (start <= end)
    {
        long long mid = start + (end - start) / 2;

        if (isPossibleSol(arr, n, k, mid)) // if it is possible to paint all boards in mid time
        {
            ans = mid;     // store the possible solution
            end = mid - 1; // search for more optimal solution
        }
        else
        {
            start = mid + 1; // if it is not possible to paint all boards in mid time, then increase the time
        }
    }
    return ans;
}

int main()
{
    int arr[] = {5, 10, 30, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    long long result = minTime(arr, n, k);
    cout << "Minimum time required to paint all partitions is " << result << " units" << endl;
    return 0;
}