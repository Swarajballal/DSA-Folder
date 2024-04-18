// EKO - Eko
// #binary-search
// Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.

// Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

// Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.

// Input
// The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).

// The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres). The sum of all heights will exceed M, thus Mirko will always be able to obtain the required amount of wood.

// Output
// The first and only line of output must contain the required height setting.

// Example
// Input:
// 4 7
// 20 15 10 17

// Output:
// 15
// Input:
// 5 20
// 4 42 40 26 46

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<long long int> trees, long long int m, long long int sol)
{
    
    long long int woodCollected = 0; // wood collected by the saw blade
    for (int i = 0; i < trees.size(); i++)
    {
        if (trees[i] > sol) // if the height of the tree is greater than the height of the saw blade then we can cut the tree and collect the wood if less than the height of the saw blade then we can't cut the tree and collect the wood
        {
            woodCollected += trees[i] - sol; // wood collected = wood collected + (height of the tree - height of the saw blade)
        }
    }
    return woodCollected >= m; // if wood collected is greater than or equal to m then it gives true else false
}

long long int maxSawBladeHeight(vector<long long int> trees, long long int m)
{
    long long int start, end, ans = -1;             // ans = -1 because we are looking for the maximum height
    start = 0;                                      // start = 0 because the minimum height of the tree is 0
    end = *max_element(trees.begin(), trees.end()); // end = maximum height of the tree in the array STL function *max_element() returns the maximum element in the range [first, last).
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;

        if (isPossible(trees, m, mid)) // if the wood collected is greater than or equal to m then we can increase the height of the saw blade to get the maximum height
        {
            ans = mid;       // update the ans
            start = mid + 1; // increase the height of the saw blade to find the maximum height
        }
        else
        {
            end = mid - 1; // decrease the height of the saw blade to find the maximum height
        }
    }
    return ans;
}

int main()
{
    long long int n, m;
    // long long int because of the constraints The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).
    // The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres).
    cout << "Enter the number of trees and the required wood amount with space between them: " << endl;
    cin >> n >> m;
    // 4 , 7
    vector<long long int> trees;
    cout << "Enter the heights of each tree with space between them: " << endl;
    // 20 15 10 17
    while (n--)
    {
        long long int height;
        cin >> height;
        trees.push_back(height);
    }
    cout << "The maximum height of the saw blade is " << maxSawBladeHeight(trees, m) << endl;
    return 0;
}