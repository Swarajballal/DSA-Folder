
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
// 	int i=0;
// 	i=i+1;
// 	cout<<i:
// 	/*print i \*//i=i+1
// 	cout<<++i;
// }


#include<iostream>
using namespace std;

int main()             //int main()
{
    int i=0;
    i=i+1;
    cout<<i;
    i=i+1;
    cout<<++i;
}