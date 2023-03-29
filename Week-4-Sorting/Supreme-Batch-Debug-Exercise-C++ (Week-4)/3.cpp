// # Supreme-Batch-Debug-Exercise-C++ (Week-4)

// **NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// Debug the code. This code tries to implement Selection Sort.

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         int temp = arr[minIndex];
//         arr[minIndex] = arr[j];
//         arr[j] = temp;
//     }
// }

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i]; // current element is at i so we need to swap with minIndex
        arr[i] = temp;
    }
}