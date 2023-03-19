#include <bits/stdc++.h>
using namespace std;

int findFirstMissing(vector<int> &arr, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] != mid + 1 && arr[mid - 1] == mid) // in this case missing will be left side of mid but if arr[mid -1] == mid that means missing is just before arr[mid] if no are consecutive that means they should be equal to mid + 1
        {
            return (mid + 1); // so return mid + 1 or arr[mid] - 1
        }
        else if (arr[mid] != mid + 1) // it means left of mid but not just before arr[mid] so decrease end to mid - 1
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1; // that means missing is right side of mid so increase start to mid + 1
        }
    }
    //if not found then return n + 1
    return (n + 1);
}

// so basically check arr[mid] == mid + 1 for consecutive numbers if not either on left of mid or right of mid if just before current index value(through checking
//  if current index == previous value at index - 1) then return mid + 1  if not that means on left so check left side of mid by end = mid - 1 else right side of mid by start = mid + 1
int main()
{
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    vector<int> arr = {1, 2, 3, 4, 5, 7, 8, 9, 10,11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = arr.size();
    int ans = findFirstMissing(arr, n);
    cout << ans << endl;
    return 0;
}