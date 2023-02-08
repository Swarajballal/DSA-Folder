// **NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.


//Add integers from 1 to N and display the sum on console.

// void main(){
//     int n;cin>>n;
//     int8_t sum=0;
//     for(int i=0;i<n;++i){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// 		return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int sum=0;
    for(int i=0;i<n;++i){
        sum+=i;
    }
    cout<<sum<<endl;
		return 0;
}