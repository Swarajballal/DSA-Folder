// **NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// Reverse Pyramid star pattern.

// #include <iostream>
// using namespace std;

// int main() {
//   // heart star pattern
//   int size;
//   cin>>size;

//   for (int i = size / 2; i < size; i += 2) {
//     // print first spaces
//     for (int j = 1; j < size - i; j += 2) {
//       cout << " ";
//     }
//     // print first stars
//     for (int j = 0; j < i + 1; j++) {
//       cout << "*";
//     }
//     // print second spaces
//     for (int j = 1; j < size - i + 1; j++) {
//       cout << " ";
//     }
//     // print second stars
//     for (int j = 1; j < i + 1; j++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   // lower part
//   // inverted pyramid
//   for (int i = size; i > 0; i++) {
//     for (int j = 0; j < size - i; j++) {
//       cout << " ";
//     }
//     for (int j = 1; j < i * 2; j++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }


#include <iostream>
using namespace std;

int main() {
  // heart star pattern
  int size;
  cin>>size;

  for (int i = size / 2; i < size; i += 2) {
    // print first spaces
    for (int j = 1; j < size - i; j += 2) {
      cout << " ";
    }
    // print first stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    // print second spaces
    for (int j = 1; j < size - i + 1; j++) {
      cout << " ";
    }
    // print second stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  // lower part
  // inverted pyramid
  for (int i = size; i > 0; i--) {
    for (int j = 0; j < size - i; j++) {
      cout << " ";
    }
    for (int j = 1; j < i * 2; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}