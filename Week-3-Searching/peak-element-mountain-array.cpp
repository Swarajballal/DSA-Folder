#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end) // not start <= end because peak will be only 1 element when s == e so break loop then and if start<=end it will be an infinite loop then so time limit will exceed
    {
        if (arr[mid] < arr[mid + 1]) // definetly not peak element if arr[mid] is less then anyone so update start = mid + 1
        {
            start = mid + 1; // update start
        }
        else
        {
            end = mid; // update end  so that decrease the range of search and find the peak element when start == end this number could be peak else not but if both start and end == mid then its peak element
        }
        mid = start + (end - start) / 2; // update mid
    }

    return arr[start]; // return the peak element
}

int main()
{
    // vector<int>arr = {0, 10, 5, 2};
    vector<int> arr = {0, 2, 1, 0};
    int ans = peakElement(arr);
    cout << "Peak element in mountain array is: " << ans << endl;
    return 0;
}