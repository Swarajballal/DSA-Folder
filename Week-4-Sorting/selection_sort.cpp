#include <bits/stdc++.h>
using namespace std;

// O(n^2) time complexity and O(1) space complexity
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++) // n-1 because we don't need to compare the last element with any other element it will be sorted by default
    {
        int minIndex = i;               // store the first index of the unsorted array and check the further index till the end of the array for minimum element
        for (int j = i + 1; j < n; j++) // from i+1 till the end of the array search for the minimum element
        {
            if (arr[j] < arr[minIndex]) // if minimum element is found then store the index of that element
            {
                minIndex = j; // store the index of the minimum element
            }
        }
        swap(arr[i], arr[minIndex]); // swap the minimum element with the first element of the unsorted array
    }
}

int main()
{
    vector<int> arr{5, 2, 4, 3, 1};
    int n = arr.size();
    selectionSort(arr, n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}