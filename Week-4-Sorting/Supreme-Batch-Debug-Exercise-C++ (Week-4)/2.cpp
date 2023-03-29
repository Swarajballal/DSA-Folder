// # Supreme-Batch-Debug-Exercise-C++ (Week-4)

// **NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// Debug the code. This code is implementation for binary search for calculating ceil index. The ceil index is the index of the smallest element in the array that is greater than or equal to a given target value.

// int ceilIndex(int arr[], int n, int target) {
//     int left = 0;
//     int right = n - 1;
//     int ceil = -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target)
//             return mid;
//         else if (arr[mid] < target)
//             left = mid + 1;
//         else
//             ceil = mid;
//             right = mid - 1;
//     }

//     return ceil;
// }

int ceilIndex(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int ceil = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
        {
            ceil = mid;
            right = mid - 1;
        }
    }

    return ceil;
}
