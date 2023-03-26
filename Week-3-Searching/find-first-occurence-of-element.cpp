#include<iostream>
using namespace std;

 int findFirstOccurence(int arr[], int size, int target) {

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1; // if element not found
    while(start <= end)
    {
        if(arr[mid] == target)  //if element found
        { 
            ans = mid;  //first store the index found at first mid
            //left search
            end = mid - 1;
        }
        else if(target < arr[mid])
        {
            //left search
            end = mid - 1;
        }
        else
        {
            //right search
            start = mid + 1;
        }

        mid = start + (end - start) / 2;  //update mid
    }

    return ans;

 }


int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4, 6, 7, 9};
    int size = 9;
    int target = 4;
    int index = findFirstOccurence(arr, size, target);
    cout << "First occurence of " << target << " is at index " << index << endl;
    return 0;
}