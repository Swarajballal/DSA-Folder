//**NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

// The below code snippet has some errors. Let’s debug it and make it compile & run successfully.

// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i - 1; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (n - i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }


#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i=1; i<=n; i++) //total number of rows
  {
    for(int j = 1; j<=n-i; j++)   //spaces will be total-i
    {
      cout << " ";
    }
    for(int j=i; j<2*i; j++)
    {
      cout<<j;                 //half pyramid till 2*i-1 e.g if i = 2 then 2 to 3  (4-1)
    }
    int ele=2*(i-1);           //other half from 2*i-2 i.e if i =2 then from above loop til 2-3 then for again 2 we will use this since it will  be 2(2-1)=2 i.e one less then 3
    for(int j=1; j<i; j++)     //it will run till j is less then ith row
    {
       cout<<ele-- ;  //for decrement
    }
    cout<<endl; //new line
  }
}
