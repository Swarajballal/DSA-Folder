#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (mid - 1 >= start && arr[mid - 1] == target) // since nearly sorted array, we can check for mid-1 // mid -1 >= start then only check for arr[mid -1] == target else it will be a neagtive index
        {
            return mid - 1;
        }

        else if (mid + 1 <= end && arr[mid + 1] == target) // and mid+1 rest all same as binary search mid + 1 <= end then only check for arr[mid + 1] == target else it will out of bound
        {
            return mid + 1;
        }

        else if (arr[mid] > target)
        {
            end = mid - 2; // - 2because we have already checked mid-1 and mid+1
        }
        else
        {
            start = mid + 2; // +2 because we have already checked mid-1 and mid+1
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 40;
    int index = binarySearch(arr, target);
    cout << "Index of target is: " << index << endl;
    return 0;
}