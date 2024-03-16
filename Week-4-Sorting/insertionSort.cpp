#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{5, 4, 3, 2, 1};
    int n = arr.size();

    // Insertion Sort   // O(n^2) time complexity and O(1) space complexity for worst case
    // for best case O(n) time complexity and O(1) space complexity
    // see notebook for explanation and dry run on test case
    for (int round = 1; round < n; round++) // round starts from 1 to n-1 i.e 5-1 = 4 in this case
    {
        // Step 1: Fetch the current element
        int val = arr[round]; // val is the element at index and not 0th because first element had nothing to compare so we started from 1 and also easy to code since round also satrts from 1 easy to understand rather then taking starting 0th
                              // Step 2: Compare the current element with all the previous elements
        int j = round - 1;    // j is the index of the previous element of the current element so if j is previous element then j + 1 is current element we are comparing all past elements with
        for (; j >= 0; j--)   // its starts from current element index - 1 till 0 i.e first index to put it in its resepective place depending on the value while comparing with all the past element
        {
            if (arr[j] > val) // comparing all the past element with current element depending on current round if 1st round then comparing second element with first element if 3 round then 3 index with 2,1,0th index
            {
                // Step 3: Shift the elements
                arr[j + 1] = arr[j]; // if there is any number in past index greater then current index element then it will shift if one place difference it will shift once if 3 place differnce then 3 times shifting but for
                                     // each case since it is greater it has to come on right side of less value element . here j + 1 represents current element index for each shifting and j represents past element index
                                     // which has greater value hence arr[j+1] current higher index = arr[j] higher value compared to element on current index
            }
            else
            {
                // Stop  Rukna hai agar koi element shift nahi hua toh break the loop
                break; // if there is no element greater then current element then it will break the loop and will not shift any element
            }
        }
        // Step 4: Copying the current element in its resepective place
        
        arr[j + 1] = val; // after shifting all the element greater then current element it will put the current element in its resepective place
    }

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}