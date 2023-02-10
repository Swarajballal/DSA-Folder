#include<iostream>
#include<limits.h>
using namespace std;

int minnum(int arr[], int size)
{
    int min = INT_MAX;
    for(int i = 0; i<size; i++)
    {
        if(arr[i] < min)
        {
            min =arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {2,5,7,23,54,69,7,14,30,1,11,12,13,14,15};
    int size = 15;
    int min = minnum(arr,size);
    cout<<min;
    return 0;
}