#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // vector<int> arr{1,2,3,4,4,4,4,4,4,10};
    // int arr[] = {1,2,3,4,5,6,7};
    // int size = 7;

    // on array

    // if(binary_search(arr, arr + size, 3))  // binary_search is a function in algorithm header file
    //     cout << "Element found in the array" << endl;
    // else
    //     cout << "Element not found in the array" << endl;    

     // on vector

    // if(binary_search(v.begin(), v.end(), 3))  // binary_search is a function in algorithm header file
    //     cout << "Element found in the vector" << endl;
    // else
    //     cout << "Element not found in the vector" << endl;



    //lower bound 
    //returns the first accurence of the element in the array
    // returns the first element that is greater than or equal to the target
    // if target is not present in the array, it returns the next greater element

    // int lastOccurence = upper_bound(arr.begin(), arr.end(), 4) - arr.begin();  // - arr.begin() is used to get the index of the element 
    // //because upper_bound returns the first element greater then 4 hence to get last element - arr.begin(); 
    // int firstOccurence = lower_bound(arr.begin(), arr.end(), 4) - arr.begin(); //same as above
    // cout << " First Occurence of " << 4 << " is " << firstOccurence << endl;
    // cout << " Last Occurence of " << 4 << " is " << lastOccurence << endl;
   
    //upper bound
    // is returns the last occurence of the element in the array
    // returns the first element that is greater than the target
    // int ans3 = upper_bound(v.begin(), v.end(), 4);  // returns the index of the element 4 is the target

        // return 0;
}
