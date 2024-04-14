#include<iostream>
#include<vector>
using namespace std;

int findLastOccurence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(target < arr[mid])
        {
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr{1,2,3,4,4,4,4,8,9,10};
    int target = 4;
    int lastindex = findLastOccurence(arr, target);
    cout << " Last Occurence of " << target << " is at index " << lastindex << endl;
}