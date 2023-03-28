#include <bits/stdc++.h>
using namespace std;
int main()
{
    // theory in black notebook to understand how it works
    vector<int> arr{10, 1, 7, 6, 14, 9};
    int n = arr.size();
    // // Bubble Sort    // o(n^2) time complexity and o(1) space complexity
    // for (int round = 1; round < n; round++) // round here describes the number of itteration from 1 to n-1 see full working in notebook
    // {
    //     for (int j = 0; j < n - round; j++) // j here represents the index of the array and n-round is used to reduce the number of itteration in each round because at the end of each round the last element will be sorted it equal to n-round-1 times comparisons if n = 6 round = 5 comparisons = 4 hence n- round - 1 or 0 to n-round-1
    //     {
    //         if (arr[j] > arr[j + 1]) // check if the current element is greater than the next element if yes then swap them
    //         {
    //             swap(arr[j], arr[j + 1]); // swap the elements so at the end of each round the largest element will be at the end of the array
    //         }
    //     }
    // }

    // Optimized Bubble Sort // O(n) time complexity and O(1) space complexity for only best case else O(n^2) for all cases
    // best case when array is alreay sorted
    // for eg 1 2 3 4 5  in this case the loop will run for round 1 then there will be 4 comparisons 1 with 2 , 2 with 3 , 3 with 4, 4 with 5 and then since nothing swapped bool swapped is false and breaks and ends the code that means the code only ran 4 times nearly equal to n = 5 hence when array is sorted the time complexity is O(n).
    // worst case when array is reverse sorted
    // for eg 5 4 3 2 1 in this case it will run all for loop completely that means O(n^2) time complexity

    for (int round = 1; round < n; round++) // round here describes the number of itteration from 1 to n-1 see full working in notebook
    {
        bool swapped = false;               // at first nothing is swapped hence false
        for (int j = 0; j < n - round; j++) // j here represents the index of the array and n-round is used to reduce the number of itteration in each round because at the end of each round the last element will be sorted it equal to n-round-1 times comparisons if n = 6 round = 5 comparisons = 4 hence n- round - 1 or 0 to n-round-1
        {
            if (arr[j] > arr[j + 1]) // check if the current element is greater than the next element if yes then swap them
            {
                swapped = true;           // if swapped then make it true
                swap(arr[j], arr[j + 1]); // swap the elements so at the end of each round the largest element will be at the end of the array
            }
        }
        // this bool will only save time if the array is already sorted then it will break the loop and save time that means O(n) only in best case and not for all cases
        if (swapped == false) // if nothing is swapped then the array is sorted and we can break the loop
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}