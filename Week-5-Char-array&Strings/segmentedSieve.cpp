#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


vector<bool>seiveErathones(int n) {
	vector<bool> isPrime(n+1, true);   // marking all prime initially
	// will make a loop till i * i is less then n because if n = 11 11*11 = 121 which is less then 13o anything up is out of bounf 	// if we assume L = 110 R = 130
	isPrime[0] = false;  // 1 is not prime
	isPrime[1] = false;   // 0 is not primes
	for(int i = 2; i * i <= n; i++) {
		if(isPrime[i]) {   // if the number is prime
			int j = i * i; // start marking multiples from here because j - 1 will already be marked false
			while(j <= n) {
				isPrime[j] = false; // mark multiple false;
				j+=i; // move to next multiple
			}
		}
	}
	return isPrime;
}


vector<bool> segmentedSieve(int L, int R) {
	// first we need all the primes between 110 to 130 let say
	vector<bool>segSieve = seiveErathones(sqrt(R));   // sqrt because if more then 11 then 12 * 12 will be 144 which is more then 130
	// converting the bool in an int array
	vector<int>basePrimes;
	for(int i = 0; i < segSieve.size(); i++) { // adding value in the int array
		if(segSieve[i]){
			basePrimes.push_back(i);
		}
	}   
	// segmented sieve array of bool
	vector<bool>segSievePrime(R-L+1, true);  // R-L because 0 - R will be more then 10^9 and give runtime error
	if(L == 1 || L == 0) {   // first element and both element will be false 
		segSievePrime[L] = false;
	}

	for(auto prime: basePrimes) {   // it is similar to i in normal sieve we will mark from primes and their multiples
		int first_mul = (L/prime)*prime;   // to find first multiple of the prime this is the formula
		if(first_mul < L) {  // if first multiple is less then the L then we need to add prime to it
			first_mul += prime;
		}
		int j = max(first_mul, prime*prime);   // multiple could be the first_mul or prime* prime similar to j in normal sieve
		while(j <= R) {  
			segSievePrime[j - L] = false;  // j - L because segSieve has index from 0 but j is like 111 assume so we need // to mark on 1st index so 111 - 110 equals to 1st index hence j - L 
			j += prime;  // increase to next multiple till <= R
		}
	}
	return segSievePrime;

}

int main() {
	int T;
	cout << "Enter the number of testcases: ";
	cin >> T;
	while(T--) {
		int L,R;
		cout << "Enter the value of L and R to find prime between them: ";
		cin >> L >> R;
		vector<bool>ans = segmentedSieve(L, R);
		for(int i = 0; i < ans.size(); i++) {
			if(ans[i]) {
				cout << i + L << " ";
			}
		}
		cout << endl;
	}
	return 0;
}