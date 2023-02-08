//**NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// The below code snippet has some errors. Let’s debug it and make it compile & run successfully.

// void main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n - i - 1 || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j <= n; j++)
        { // starting of each row must be equal to the loop of rows i.e if 5 rows then 1 2 3 4 5 since starts from 0 hence i+1
            if (j == i + 1 || j == n || i == 0)
            { // for first iteration when i=0 all numbers should be printed hence i==0 print j starting of each number is equal to row count hence j==i+1 and last number should be equal to n hence j==n
                cout << j;
            }
            else
            {
                cout << " "; // if not print space
            }
        }
        cout << endl;
    };
}