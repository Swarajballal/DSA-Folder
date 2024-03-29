/*
# Supreme-Batch-Debug-Exercise-C++ (Week-6)

**NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.**

**How to attempt Debugging Exercise?**

1. Copy the code to your code editor (e.g. VS Code).
2. Add relevant header files like “#include <iostream>” etc.
3. Run the code.
4. You will notice the expected output is not printing at the console.
5. Apply your smart coder mind to Debug the code.
6. **Warning**: Only see the solution after you have tried enough.
*/

// #include <bits/stdc++.h>
// using namespace std;

// void SieveOfEratosthenes(int n) {
// 	vector<bool> prime(n,true);
// 	for (int p = 2; p * p <= n; p++) {
// 		if (prime[p] == false) {
// 			for (int i = p * p; i <= n; i += p)
// 				prime[i] = true;
// 		}
// 	}

// 	for (int p = 2; p <= n; p++)
// 		if (prime[p])
// 			cout << p << " ";
// }

// int main() {
// 	int n = 50;
// 	SieveOfEratosthenes(n);
// 	return 0;
// }


// Solution:

#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n) {
	vector<bool> prime(n+1,true);  // + 1 because we need to check till n
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

int main() {
	int n = 50;
	SieveOfEratosthenes(n);
	return 0;
}


