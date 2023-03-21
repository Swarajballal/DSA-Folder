#include <bits/stdc++.h>
using namespace std;

bool findtarget(int arr[][4], int rows, int cols, int target)
{
    int start = 0, end = rows * cols - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int rowindex = mid / cols;             // finding row index
        int colindex = mid % cols;             // finding column index
        int element = arr[rowindex][colindex]; // storing element at each index

        if (element == target) // if element is equal to target then we will return true
        {
            return true;
        }

        else if (element > target) // if element is greater than target then we will search in left half
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1; // if element is smaller than target then we will search in right half
        }
    }
    return false; // if element is not found then we will return false
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16},
                     {17, 18, 19, 20}};

    int rows = 5, cols = 4;
    int target = 22;
    bool ans = findtarget(arr, rows, cols, target);
    if (ans)
        cout << "Target found";
    else
        cout << "Target not found";
    return 0;
}