#include <bits/stdc++.h>
using namespace std;

// for better understanding of this problem, please refer to the notes:
// refer to notes imp

int solve(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1, ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (start == end) // if only one element is left
        {
            ans = arr[start];
            return ans;
            break;
        }
        else if (mid % 2 == 0) // if mid is even
        {
            // left side since it is mid is even, so we will check if mid is equal to mid+1
            if (arr[mid] == arr[mid + 1]) // if mid is equal to next element then answer will be on on the right side
            {
                start = mid + 2; // then we will search in right half + 2 because we have already checked mid and mid+1
            }

            else
            {
                end = mid; // if mid is not equal to mid+1 then answer might be the current mid or on the left side so end = mid - 1  but since we need current index too to check further so end=mid
            }
        }
        else
        {
            // if mid is odd then right side
            if (arr[mid] == arr[mid - 1]) // if mid is equal to mid-1 that is first occurence of number on even index and mid is at next i.e odd index so move right since this pattern is on left of answer
            {
                start = mid + 1; // moving right   + 1 because we have already checked mid and mid-1
            }
            else
            {
                end = mid - 1; // if mid is not equal to mid-1 then answer might be on the left side so end = mid - 1
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int ans = solve(arr);
    cout << "Single element is: " << ans << endl;
    return 0;
}