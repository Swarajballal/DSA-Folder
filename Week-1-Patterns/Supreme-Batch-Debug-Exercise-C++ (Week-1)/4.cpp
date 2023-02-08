//**NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

//The below code snippet has some errors. Let’s debug it and make it compile & run successfully.

// void main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++i) {
//             cout<<"*\n";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;

int main() {             //int main
	int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {         //j++
            cout<<"*";   ///removed \n (new line)
        }
        cout<<endl;
    }
}