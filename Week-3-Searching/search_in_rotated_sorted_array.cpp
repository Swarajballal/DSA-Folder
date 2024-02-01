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


// for arrays

////Pivot index finding so that we can break the array into two sorted monolithic array
//int findPivotIndex(int arr[], int l, int h){
//    int index = -1; // index as -1 initialized if no index found
//    while(l <= h) {
//        int m = l + (h - l)/2;
//        // if there is only one element in the array then return that index
//        // or at the end of the array
//        if(l == h){
//            index = l;
//            break;
//        }else if(m + 1 <= h && arr[m] > arr[m + 1]){
//            // only the max element will be greater then element iin front of it or pivot index
//            index = m;
//            break;
//        }else if(m - 1 >= 0 && arr[m - 1] > arr[m]){
//            // if the pivot index or max element is behind the mid element
//            index = m - 1;
//            break;
//        }else if(arr[l] > arr[m]){
//            // when a start element is more then the mid that means we are on the right side of the pivot element
//            //so we need to move left to find pivot index
//            h = m - 1;
//        }else {
//            // if not that means we are on left side of pivot index so we need to move right
//            l = m + 1;
//        }
//    }
//    return index;
//}
//
//
//// Perform binary search operation here
//int binarySearch(int arr[], int l, int h, int target) {
//    // initially the index is -1 that means nothing found
//    int value = -1;
//    while(l <= h) {
//        int m = l + (h - l)/2;
//
//        if(arr[m] == target) {
//            // if target found return index
//            value = m;
//            break;
//        }
//        else if(arr[m] > target) {
//            // if target is less then current element then search on left
//            h = m - 1;
//        }else {
//            //else right
//            l = m + 1;
//        }
//    }
//    //return value else if not found then -1
//    return value;
//}
//
//
//int search(int arr[], int l, int h, int key){
//    // l: The starting index
//    // h: The ending index, you have to search the key in this range
//    int pivotIndex = findPivotIndex(arr, l, h);
//    // conditons on which searchspace key might be present
//    int ans = -1;
//    if(pivotIndex != -1){ // if pivotIndex actually exsists
//        if(key >= arr[0] && key <= arr[pivotIndex]){
//            // binary search to search the key element
//            // between 0 and pivotIndex
//            ans = binarySearch(arr, 0, pivotIndex, key);
//        }else {
//            // binary search to search the key element
//            // between pivotIndex + 1 to end of array
//            ans = binarySearch(arr, pivotIndex + 1, h, key);
//        }
//    }
//
//    return ans;
//
//}