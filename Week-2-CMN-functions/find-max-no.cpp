#include<iostream>
#include<limits.h>
using namespace std;

int maxnum(int arr[], int size)
{
    int maxi = INT_MIN;
    for(int i = 0; i<size; i++)
    {
        if(arr[i] > maxi)
        {
            maxi =arr[i];
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {2,5,5,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = 15;
    int max = maxnum(arr,size);
    cout<<max;
    return 0;
}