// # Supreme-Batch-Debug-Exercise-C++ (Week-3)

// **NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// This code attempts to print elements (only once) which appear more than one time. Can you spot the error in the code:

// #include<iostream>
// #include<cstring>
// using namespace std;

// void printDuplicates(int arr[], int n){
//     int freq[n+1];
//     memset(freq, 0, sizeof(freq)); // initialize the frequency array to 0
//     bool flag = false; // added a flag to check if there are no duplicate elements
//     for(int i=0;i<=n;i++){
//         freq[arr[i]]++;
//         if(freq[arr[i]] > 1){
//             flag = true;
//             cout<<arr[i]<<" ";
//         }
//     }
//     if(!flag){
//         cout<<"No duplicate elements";
//     }
// }

// int main(){
//     int n = 6;
//     int arr[n] = {3, 2, 1, 2, 2, 3};
//     printDuplicates(arr, n);
//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

void printDuplicates(int arr[], int n)
{
    int freq[n + 1];
    memset(freq, 0, sizeof(freq)); // initialize the frequency array to 0
    bool flag = false;             // added a flag to check if there are no duplicate elements
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2)   //check if the element is repeated == 2
        {
            flag = true;
            cout << arr[i] << " ";
        }
    }
    if (!flag)
    {
        cout << "No duplicate elements";
    }
}

int main()
{
    int n = 6;
    int arr[n] = {3, 2, 1, 2, 2, 3};
    printDuplicates(arr, n);
    return 0;
}