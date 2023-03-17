#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int indexOftarget(int arr[], int size, int target)
{
    int start = 0;      // first index of array
    int end = size - 1; // last index of array
    // int mid = (start + end) / 2;  // mid index of array
    int mid = start + (end - start) / 2; // mid index of array (to avoid overflow) here integer
                                         // overflow will not occur as size is less than 2^31
    // overflow will occur if size is greater than 2^31 as size is of type int and 2^31 is of type long long int
    // int mid = start/2 + end/ 2;  // but this will not work as start/2 and end/2 will be 0
    while (start <= end)
    { // loop will run until start is less than or equal to end
        if (arr[mid] == target)
        {
            cout << "Target found at index: " << mid << endl;
            return mid;
        }
        else if (target < arr[mid])
        {
            // search in left half if target is less than mid
            end = mid - 1;
        }
        else
        {
            // search in right half if target is more than mid
            start = mid + 1;
        }

        mid = start + (end - start) / 2; // update mid
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target;
    cout << "Enter the target: ";
    cin >> target;
    int index = indexOftarget(arr, size, target);
    cout << "Index of target: " << index << endl;
    return 0;
}

// using STL function for vector

// int main()
// {
//     vector<int> arr = {2,4,6,8,10,12,16};
//     if(binary_search(arr.begin(), arr.end(), 10))
//         cout << "Target found" << endl;
//     else
//         cout << "Target not found" << endl;

//     return 0;
// }



// // using STL function for arrays

// int main()
// {
//     int arr[] = {2,4,6,8,10,12,16};
//     int size = 7;
//     if(binary_search(arr, arr + size, 60))
//         cout << "Target found" << endl;
//     else
//         cout << "Target not found" << endl;

//     return 0;
// }