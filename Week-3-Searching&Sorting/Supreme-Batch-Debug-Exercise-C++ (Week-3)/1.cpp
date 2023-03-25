// # Supreme-Batch-Debug-Exercise-C++ (Week-3)

// **NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// 1. **This program declares an integer array of size 5 and initializes it with values 1, 2, 3, 4, and 5. Then, it attempts to print the elements of the array using a loop. However, there's an error in the loop that you need to debug. Can you find it and fix it?**

// #include <iostream>
// using namespace std;

// int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    for(int i = 1; i <= 5; i++) {
//       cout << arr[i] << " ";
//    }
//    return 0;
// }

#include <iostream>
using namespace std;

int main()
{
   int arr[5] = {1, 2, 3, 4, 5};
   for (int i = 0; i < 5; i++)
   { // changed i = 1 to i = 0 and i <= 5 to i < 5 because array index starts from 0 and ends at 4
      cout << arr[i] << " ";
   }
   return 0;
}