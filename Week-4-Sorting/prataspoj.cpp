// PRATA - Roti Prata
// no tags
// IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting. The subcommittee members are asked to go to food connection and get P (P<=1000) pratas packed for the function. The stall has L cooks (L<=50) and each cook has a rank R (1<=R<=8). A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes, 1 more prata in 3R minutes and so on(he can only cook a complete prata) ( For example if a cook is ranked 2.. he will cook one prata in 2 minutes one more prata in the next 4 mins an one more in the next 6 minutes hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook only 3 pratas as he does not have enough time for the 4th prata). The webmaster wants to know the minimum time to get the order done. Please write a program to help him out.

// Input
// The first line tells the number of test cases. Each test case consist of 2 lines. In the first line of the test case we have P the number of prata ordered. In the next line the first integer denotes the number of cooks L and L integers follow in the same line each denoting the rank of a cook.

// Output
// Print an integer which tells the number of minutes needed to get the order done.

// Example
// Input:
// 3
// 10
// 4 1 2 3 4
// 8
// 1 1
// 8
// 8 1 1 1 1 1 1 1 1

// Output:
// 12
// 36
// 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> cooksRank, int nP, int sol)
{
    int currP = 0; // currP = current number of pratas cooked

    for (int i = 0; i < cooksRank.size(); i++)
    {
        int j = 1;            // j here is representing the multiple of R so 1st prata takes 1*R time, 2nd prata takes 2*R time and so on
        int timeTaken = 0;    // timeTaken = time taken to cook currP pratas initially 0 for each cook
        int R = cooksRank[i]; // R = rank of cook i.e time taken to cook 1 prata so first in array is 1st cook with per min time 1, 2nd cook with per min time 2 and so on
        while (true)
        {
            if (timeTaken + j * R <= sol) // if time taken by cook previously + time taken by current prata is less than or equal to sol then we can cook the prata and increase currP and timeTaken by time taken by current prata and increase j++ so it sets the multiple of R for next prata
            {
                currP++;            // increase currP by 1 since we can cook the prata
                timeTaken += j * R; // increase timeTaken by time taken by current prata that is R it takes  to cook 1 prata multiplied by j at that instance
                j++;                // increase j by 1 so it sets the multiple of R for next prata
            }
            else
            {
                break; // if time taken by cook previously + time taken by current prata is greater than sol then we cannot cook the prata so we break the loop and move to next cook
            }
        }
        if (currP >= nP) // if currP is greater than or equal to nP then we can cook all the pratas so we return true
        {
            return true;
        }
    }
    return false; // if currP is less than nP then we cannot cook all the pratas so we return false
}

int minTimeToCompleteOrder(vector<int> cooksRank, int nP, int nC)
{
    int start = 0, end, ans = -1;
    // for binary search find min and max time
    end = *max_element(cooksRank.begin(), cooksRank.end()) * (nP * (nP + 1) / 2); // here max time is when the most inefficient cook cooks all the pratas so we find max element in cooksRank array  by *max_element that is most ineffecient cook
    // and multiply it with nP*(nP+1)/2 since nP*(nP+1)/2 is the sum of first nP natural numbers since 1st cook takes cookRank[0] times 2nd parata takes 2*cookRank[0] times and so on

    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (isPossible(cooksRank, nP, mid))
        {
            ans = mid;     // if possible then we store the time in ans and try to find min time
            end = mid - 1; // see if we can find even lesser time
        }
        else
        {
            start = mid + 1; // if not possible then we increase the time
        }
    }
    return ans;
}

int main()
{
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;
    // 3
    while (T--)
    {
        int nP, nC; // nP = number of pratas, nC = number of cooks
        cout << "Enter number of pratas and number of cooks put space between them : ";
        // 10 4
        cin >> nP >> nC;
        vector<int> cooksRank;
        while (nC--)
        {
            int R; // R = rank of cook i.e time taken to cook 1 prata so first in array is 1st cook with per min time 1, 2nd cook with per min time 2 and so on
            cout << "Enter rank of cook: ";
            // 1 2 3 4
            cin >> R;
            cooksRank.push_back(R);
        }
        cout << "Minimum time to complete order is: " << minTimeToCompleteOrder(cooksRank, nP, cooksRank.size()) << " minutes" << endl;
    }

    return 0;
}