// **NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// Left Triangle star Pattern

// #include <iostream>
// using namespace std;

// int main() {
//   // size of the triangle
//   int size = N;
//   // loop to print the pattern
//   for (int i = 0; i < size; i++) {
//     // print column
//     for (int j = 0; j < i; j++) {
//       cout << "**";
//     }
//     cout << "\n";
//   }
//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
  // size of the triangle
  int size;
  cin >> size;
  // loop to print the pattern
  for (int i = 0; i <= size; i++) {
    // print column
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}