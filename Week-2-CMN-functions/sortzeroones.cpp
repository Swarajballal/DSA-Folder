#include<iostream>
#include<vector>
using namespace std;

void printarr(vector<int>arr)
{
    for(auto value: arr)
    {
        cout<<value<<" ";
    }
}

void sortonezero(vector<int>arr, int n)
{
    //two pointers approach

    int start = 0, i = 0;
    int end = n;

    while(start <= end)
    {
        //swap from left (start) if 0
        if(arr[i] == 0)   
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        //swap from right (end) if 1
        else
        {
            swap(arr[i], arr[end]);
            end--;
            //here there is no need to increment i because we 
            //are not sure about the value at i or the 
            //value that was prevously swapped we need to check the swapped value
        }
    }

    printarr(arr);
}

int main()
{
    vector<int> arr{1,0,1,0,1,0,1};
    int n = arr.size() - 1;
    sortonezero(arr,n);
    return 0;
}