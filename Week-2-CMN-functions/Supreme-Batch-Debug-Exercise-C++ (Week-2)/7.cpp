// **NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// Simple Calculator.

// #include <iostream>
// using namespace std;

// int main() {
//     char oper;
//     float num1, num2;
//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> oper;
//     cout << "Enter two numbers: " << endl;
//     cin >> num1 >> num2;

//     switch (oper) {
//         case +:
//             cout << num1 << " + " << num2 << " = " << num1 + num2;
//         case -:
//             cout << num1 << " - " << num2 << " = " << num1 - num2;
//         case /:
//             cout << num1 << " * " << num2 << " = " << num1 * num2;
//         case *:
//             cout << num1 << " / " << num2 << " = " << num1 / num2;
//         default:
//             // operator is doesn't match any case constant (+, -, *, /)
//             cout << "Error! The operator is not correct";
//             break;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '/':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '*':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}