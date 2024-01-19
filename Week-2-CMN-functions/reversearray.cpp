#include<iostream>
using namespace std;

void reversearr(int arr[], int size)
{
    int start = 0;
    int end = size-1;

//   using predefined function for swap for reverse
    // while(start<end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    // for(int i = 0; i<size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // without predefined function for swap for reverse
    // using temp variable
//     while(start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp ;
//         start++;
//         end--;
//     }

//     for(int j=0; j<size; j++)
//     {
//         cout<<arr[j]<<" ";
//     }
// }

// without predefined function for swap for reverse and also without temp variable
//    while(start < end)
//    {
//        arr[start] = arr[start] + arr[end];     // 2+5 = 7
//        arr[end] = arr[start] - arr[end];       // 7-5 = 2
//        arr[start] = arr[start] - arr[end];     // 7-2 = 5
//        start++;
//        end--;
//    }
//    for(int j=0; j<size; j++)
//    {
//        cout<<arr[j]<<" ";
//    }

// Using XOR this will fail if x == y because it will lead to 0 and original value will be lost

    while(start < end){
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];

        start++;
        end--;
    }

    for(int j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
}


int main()
{
    int arr[] = {2,5,7,23,54,69,7,14,30,1,11,12,13,14,15};
    int size = 15;
    reversearr(arr,size);   
    return 0;
}