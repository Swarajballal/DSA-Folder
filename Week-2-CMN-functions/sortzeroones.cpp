#include<iostream>
#include<vector>
using namespace std;

//mthod 1
// void printarr(vector<int>arr)
// {
//     for(auto value: arr)
//     {
//         cout<<value<<" ";
//     }
// }

// void sortonezero(vector<int>arr, int n)
// {
//     //two pointers approach

//     int start = 0, i = 0;
//     int end = n;

//     while(start <= end)
//     {
//         //swap from left (start) if 0
//         if(arr[i] == 0)   
//         {
//             swap(arr[i], arr[start]);
//             i++;
//             start++;
//         }
//         //swap from right (end) if 1
//         else
//         {
//             swap(arr[i], arr[end]);
//             end--;
//             //here there is no need to increment i because we 
//             //are not sure about the value at i or the 
//             //value that was p  revously swapped we need to check the swapped value
//         }
//     }

//     printarr(arr);
// }

// int main()
// {
//     vector<int> arr{1,0,1,0,1,0,1};
//     int n = arr.size() - 1;
//     sortonezero(arr,n);
//     return 0;
// }

// method 2 using 2 pointer or duthch national flag algorithm
void sortonezero(vector<int> arr, int n)
{
    int l,h;
    l= 0, h= n-1;

    while(l<h)
    {
        if(arr[l]==0)
        {
            l++;
        }
        else if(arr[h]==1)
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr{1,0,1,0,1,0,1,0,1,1};
    int n = arr.size() - 1;
    sortonezero(arr,n);
    return 0;
}
