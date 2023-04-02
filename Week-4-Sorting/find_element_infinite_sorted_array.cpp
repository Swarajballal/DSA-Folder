#include <bits/stdc++.h>
using namespace std;

// normal binary search
int binarySearch(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        else if (arr[mid] > x)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int findPos(int arr[], int n, int x)
{
    int i = 0;       // start index
    int j = 1;       // end index
    if (arr[0] == x) // if found at first index
    {
        return 0;
    }
    while (arr[j] < x) // find the range where x lies while arr[j] is less than x
    {
        i = j;     // update i as j and new value for j so that we get a bound range
        j = 2 * j; // j is doubled
    }
    return binarySearch(arr, i, min(j, n - 1), x); // so i is the previous j value so that is start index and min(j,n-1) is the end index because j may go out of bounds so minimum of j and n-1 is taken
}

int main()
{
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,
                 140, 160, 170};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 130;
    int ans = findPos(arr, n, x);
    if (ans == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    return 0;
}