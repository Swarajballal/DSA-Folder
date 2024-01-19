#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int arr[100];
    memset(arr, -1, sizeof(arr));

    for(int i =0; i<100; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//Because memset is a low-level function, it only works with binary 
//values and not with higher-level data types such as integers or 
//floating-point numbers. To set a block of memory to a specific 
//non-binary value, you would need to write a loop that writes 
//that value to each individual byte of memory, rather than using memset.
//in memeset you can only use -1 or 0.