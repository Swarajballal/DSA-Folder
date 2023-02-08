//**NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

//The below code snippet has some errors. Let’s debug it and make it compile & run successfully.

// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(i%n == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }


#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	bool isPrime = true;
  for(int i=2;i<n;i++){
      if(n%i == 0){                         //n%i
          isPrime = false; break;
      }
  }
	if(isPrime){
		cout<<"Prime"<<endl;	
	}
	else{
		cout<<"Not Prime"<<endl;	
	}
  return 0;
}