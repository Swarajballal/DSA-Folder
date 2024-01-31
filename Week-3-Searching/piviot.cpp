#include <bits/stdc++.h>
using namespace std;
// pivot element is the one that breaks the sorted array order or the max element in the array if not broken then too return max element

int pivotElement(vector<int> arr)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (start == end)
            return arr[start]; // if start and end are equal then return the element at that index since single element is present

        if (mid <= end && arr[mid] > arr[mid + 1]) // if mid is greater than mid + 1 then mid is the pivot element because it breaks the sorted order
        {
            cout << "Pivot element in the array is at index: " << mid << endl;
            return arr[mid];
        }
        else if (mid - 1 >= start && arr[mid - 1] > arr[mid]) // if mid - 1 is greater than mid then mid - 1 is the pivot element because it breaks the sorted order
        {
            // error will occur if mid-1 is not checked if greater then or equal to start else it could be -1 or -ve  which is not valid index. else runtime error invalid memory allocation
            cout << "Pivot element in the array is at index: " << mid - 1 << endl;
            return arr[mid - 1];
        }
        else if (arr[start] > arr[mid]) // if start is greater than mid then pivot element is in the left half of the array
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1; // if start is less than mid then pivot element is in the right half of the array
        }
    }

    return -1;
}

int main()
{
    // vector<int> arr{9, 10, 2, 4, 6, 8};
    vector<int> arr{1, 3};
    int ans = pivotElement(arr);
    cout << "Pivot element in the array is: " << ans << endl;
    return 0;
}