// #include<iostream>
// using namespace std;


// void extremePrint(int arr[], int n)
// {
//     int start = 0, end = n-1;

//     while(start <= end)
//     {
//         // if(start == end)
//         // {
//         //     cout << arr[start];
//         // }
//         // else
//         // {
//              cout<< arr[start] << " "<< arr[end] << " ";
//              start++;
//              end--;
//         // }
//     }
// }

// int main()
// {
//     int arr[9] = {1,2,3,4,5,6,7};
//     extremePrint(arr, 7);
//     return 0;
// }



#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;
    int end = size-1;

    while(true)
    {
        if(start > end)
        {
            break;
        } 

        if(start == end)
        {
            cout << arr[start]<<" ";
        }

        else
        {   cout<< arr[start] << " ";
            cout<< arr[end] << " ";
        }
            start++;
            end--;

    }    
    return 0;
}