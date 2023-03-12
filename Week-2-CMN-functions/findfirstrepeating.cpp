#include<iostream>
#include<unordered_map>
#include<limits.h>
using namespace std;

int firstrepeat(int *arr, int n)
{
    // method 1 : using nested for loop
    // using two loops time complexity is O(n^2) and space complexity is O(1) not efficient nested for loop
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = i+1; j < n; j++)  // j = i+1 because we don't want to compare the same element
    //     {
    //         if(arr[i] == arr[j])
    //         {
    //             return i+1;  // returning index of first repeating element
    //         }
    //     }
    // }
    // return -1;   // if no repeating element found

    //method 2 : using hash table
    // unordered_map<int, int>hash;  // using hash table time complexity is O(n) and space complexity is O(n)
    // for(int i = 0; i < n; i++)
    // {
    //     hash[arr[i]]++;
    // }

    // for(int i = 0; i < n; i++)
    // {
    //     if(hash[arr[i]] > 1)
    //     {
    //         return i+1;
    //     }
    // }

    // return -1;


    //method 3 : without using unordered_map creating our own hash table

    int max = INT_MIN;
    //find the max element in the array
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    int *hash = new int[max+1](); // creating hash table of size max+1

    for(int i = 0; i < n; i++)  
    {
        hash[arr[i]]++;
    }

    for(int i = 0; i < n; i++)  //till n because we don't want to compare the same element
    {
        if(hash[arr[i]] > 1)
        {
            delete [] hash; // deleting hash table
            return i+1;
        }
    }
    delete [] hash; // deleting hash table

    return -1;
    
}

int main()
{
//    int arr[] = {1,2,5,3,4,5,3};
   int arr[] = {1,2,3,4,5};
   int n = sizeof(arr)/sizeof(int);
   int index = firstrepeat(arr,n);
   if(index == -1)
   {
         cout << "No repeating element found" << endl;
   }
   else 
   {
         cout << "First repeating element is at index: " << index << endl;
   }
    return 0;
}