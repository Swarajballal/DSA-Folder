// # Supreme-Batch-Debug-Exercise-C++ (Week-3)

// **NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// This code tries to move all negative numbers to one side but have some errors, can you spot those errors. Hint: Incomplete conditions applied.

// #include<iostream>
// using namespace std;
// void moveNegative(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<j){
//         while(arr[i]<0){ // swap when a positive element is encountered
//             i++;
//         }
//         while(arr[j]>0){ // swap when a negative element is encountered
//             j--;
//         }
//         swap(arr[i], arr[j]); // swap the elements
//     }
// }
// int main(){
//     int n = 5;
//     int arr[n] = {2, -3, -1, 5, -4};
//     moveNegative(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
void moveNegative(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        // always check if i<j before swapping
        while (arr[i] < 0 && i < j)
        { // move i until a positive element is encountered
            i++;
        }
        while (arr[j] > 0 && i < j)
        { // move j until a negative element is encountered
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]); // swap the elements
        }
    }
}
int main()
{
    int n = 5;
    int arr[n] = {2, -3, -1, 5, -4};
    moveNegative(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}