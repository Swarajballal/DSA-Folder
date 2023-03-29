// # Supreme-Batch-Debug-Exercise-C++ (Week-4)

// **NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// Debug the code. This code tries to implement Bubble Sort.

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 2; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // from 0 to n-1
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}