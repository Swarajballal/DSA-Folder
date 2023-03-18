#include <bits/stdc++.h>
using namespace std;

vector<int> find(int *arr, int n, int x)
{
    vector<int> result;
    int first = lower_bound(arr, arr + n, x) - arr;
    if (first == n || arr[first] != x) // first == n means that x is not present in the array because lower_bound gives the last index if the element is not present or it may give number greater than equal to x so to check that we use arr[first] != x so that we are sure that number at arr[first] is greater then x and not x

    {
        result.push_back(-1); // if x is not present in the array then we return -1 first index
        result.push_back(-1); // if x is not present in the array then we return -1 last index
    }
    else
    {
        result.push_back(first);
        int last = upper_bound(arr, arr + n, x) - arr; // upper_bound gives the index of the first element greater than x
        result.push_back(last - 1);                    //-1 because upper_bound gives the index of the first element greater than x so we need to subtract 1 to get the last index of x
    }
    return result; 
}

int main()
{
    int x;
    cin >> x;
    int arr[9] = {1, 3, 5, 5, 5, 5, 7, 123, 125};
    vector<int> ans;
    ans = find(arr, 9, x);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}