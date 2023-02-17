// Total occurence using two logic:

// 1st method without using STL function

// #include<iostream>
// #include<vector>
// using namespace std;

// int findFirstOccurence(vector<int> arr, int target)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     int mid = start + (end - start) / 2;
//     int ans = -1;

//     while(start <= end)
//     {
//         if(arr[mid] == target)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if(target < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }

//         mid = start + (end - start) / 2;
//     } 
//     return ans;
// }

// int findLastOccurence(vector<int> arr, int target)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     int mid = start + (end - start) / 2;
//     int ans = -1;

//     while(start <= end)
//     {
//         if(arr[mid] == target)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if(target < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }

//         mid = start + (end - start) / 2;
//     } 
//     return ans;
// }

// int main()
// {
//     vector<int> arr{1,2,3,4,4,4,4,4,4,10};
//     int target = 4;
//     int totalOccurence = findLastOccurence(arr, target) - findFirstOccurence(arr, target) + 1;
//     cout << " Total Occurence of " << target << " is " << totalOccurence << endl;
// }



// 2nd method using STL function

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,4,4,4,4,4,10};
    int target = 4;
    int lastOccurence = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    int firstOccurence = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    cout << " First Occurence of " << target << " is " << firstOccurence << endl;
    cout << " Last Occurence of " << target << " is " << lastOccurence << endl;
    int totalOccurence = upper_bound(arr.begin(), arr.end(), target) - lower_bound(arr.begin(), arr.end(), target);
    cout << " Total Occurence of " << target << " is " << totalOccurence << endl;
}