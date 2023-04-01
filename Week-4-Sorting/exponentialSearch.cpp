#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int start, int end, int x)
{
    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(a[mid] == x)
        {
            return mid;
        }

        else if(x > a[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int exponentialSearch(int a[], int n, int x)
{
    if (a[0] == x)
        return 0;              // if found at first index
    int i = 1;                 // i does not start from 0 because i = i*2 will be 0
    while (i < n && a[i] <= x) // find the range where x lies i is less than n and a[i] is less than x
    {
        i = 2 * i; // i is doubled  hence it is called doubling search either
    }
    return binarySearch(a, i / 2, min(i, n - 1), x); // so i/2 is the previous i value so that is start index and min(i,n-1) is the end index because i may go out of bounds so minimum of i and n-1 is taken
}

int main()
{
    int a[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 56;
    int ans = exponentialSearch(a, n, x);
    cout << "Element found at index " << ans << endl;
    return 0;
}