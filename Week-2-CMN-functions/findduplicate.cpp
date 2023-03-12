#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int duplicate(vector<int> arr)
{
    // method 1 sort and check using for loop if i==i+1 return arr[i]  time complexity O(nlogn) space complexity O(n) worst case
    //  sort(arr.begin(), arr.end());
    //  for(int i=0;i<arr.size();i++)
    //  {
    //      if(arr[i]==arr[i+1])
    //      {
    //          return arr[i];
    //      }
    //  }

    // 2nd method negative marking method time complexity O(n) space complexity O(1)  but this method modifies the array which is not allowed in the question

    // int ans=-1;
    // for(int i=0; i<arr.size(); i++)
    // {
    //     int index = abs(arr[i]);

    //     if(arr[index] < 0)
    //     {
    //         ans = index;
    //         break;
    //     }

    //     arr[index] *= -1;
    // }
    // return ans;

    // method 3 swapping and returing the extra element or duplicate at 0th index time complexity O(n) space complexity O(1)

    // while(arr[0] != arr[arr[0]])    //while loop is used to check if the element at 0th index is not equal to the element at the index of the element at 0th index
    // {
    //     swap(arr[0], arr[arr[0]]);   //swap the element at 0th index with the element at the index of the element at 0th index
    // }
    // return arr[0];    //return the element at 0th index since that will be the duplicate element

    // 4th method using binarty search time complexity O(nlogn) space complexity O(1)
    int low = 1, high = arr.size() - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] <= mid)
            {
                count++;
            }
        }
        if (count > mid)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int> arr{1, 2, 4, 2, 5, 3};
    cout << duplicate(arr);
    return 0;
}