// **NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.


// Print full pyramid like an Equilateral Triangle

// #include <iostream>
// using namespace std;
// int main()
// {
// int k, n;
// cout << "Enter the number of rows : ";
// cin >> n;
// cout << " ";
// for (int i=1; i<=n; i++)
// {

// for (int j=1; j<=n-i; j++)
// cout << " ';

// for (j=1,k=i-1; j<=2*i-1; j++,k--)
// {
// if (1 || j <= k)
// cout << j;
// else
// cout << k;
// }
// cout << endl;

// cout << " ";

// }
// return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int k, n;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << " ";
    for (int i=1; i<=n; i++)
    {

        for (int j=1; j<=n-i; j++)
        {
            cout << " ";
        }

        for (int j=1,k=i-1; j<=2*i-1; j++,k--)
        {
            if (1 || j <= k)
            cout << j;
            else
            cout << k;
            }
            cout << endl;

            cout << " ";

        }
        return 0;
}