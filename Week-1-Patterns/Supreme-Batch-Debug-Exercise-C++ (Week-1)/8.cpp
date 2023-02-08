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
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n*2-1; ++j) {
// 		        int k=0;
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k < 2*i+1){
//                 if(k==0 || k == 2*i - 1 || i == n - 1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 cout<<" ";
//             } k++;
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int n, j, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        for (j = i; j < n; j++) // for initial spaces
        {
            cout << " ";
        }

        for (j = 1; j <= (2 * i - 1); j++) // for toal number of elements in a row for e.g if row=2, then total elements in 2nd row =2*2-1=3
        {
            if (i == n || j == 1 || j == (2 * i - 1)) // i=n for last row all stars, j==1 for first star in the row and 2*i-1 for last star in the row.
            {
                cout << "*";
            }
            else
            {
                cout << " "; // else space
            }
        }
        cout << endl; // new line
    }
}