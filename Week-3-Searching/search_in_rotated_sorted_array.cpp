#include <bits/stdc++.h>
using namespace std;

int findPivotIndex(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (start == end) // if only one element is left
        {
            return start;
        }

        else if (mid + 1 <= end && arr[mid] > arr[mid + 1]) // if mid is greater than next element then mid is pivot max element in rotated and sorted array and also check if mid + 1 is less then last index nth index else out of bound
        {
            return mid;
        }

        else if (mid - 1 >= start && arr[mid - 1] > arr[mid]) // if mid - 1 is greater than mid then mid - 1 is pivot max element in rotated and sorted array and also check if mid - 1 is greater then first index 0th index else out of bound
        {
            return mid - 1;
        }

        else if (arr[start] > arr[mid]) // if arr[start] > arr[mid] that means the pivot element is in left side of mid
        {
            end = mid - 1;
        }

        else // if arr[start] < arr[mid] that means the pivot element is in right side of mid
        {
            start = mid + 1;
        }
    }
    return -1;
}

int binarySearch(vector<int> &arr, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) // if target is found return mid
        {
            return mid;
        }
        else if (arr[mid] > target) // if target is less than mid then search in left side of mid
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1; // if target is greater than mid then search in right side of mid
        }
    }
    return -1;
}

int searchElement(vector<int> &arr, int target)
{
    int pivotIndex = findPivotIndex(arr, target);      // find pivot index
    int ans = -1;                                      // if target not found return -1
    if (target >= arr[0] && target <= arr[pivotIndex]) // if target is in range of 0th index to pivot index then search in range of 0th index to pivot index
    {
        ans = binarySearch(arr, 0, pivotIndex, target);
    }
    else // if target is in range of pivot index + 1 to last index then search in range of pivot index + 1 to last index
    {
        ans = binarySearch(arr, pivotIndex + 1, arr.size() - 1, target);
    }
    return ans;
}

int main()
{
    // vector<int> arr{4, 5, 6, 7, 0, 1, 2};
    vector<int> arr{4, 5, 6, 7, 0, 1, 2};
    int target = 3;
    int ans = searchElement(arr, target);
    if (ans > -1)
    {
        cout << "Target " << target << " found at index: " << ans << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }
    return 0;
}