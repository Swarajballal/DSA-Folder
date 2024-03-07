// 204. Count Primes
// Solved
// Medium
// Topics
// Companies
// Hint
// Given an integer n, return the number of prime numbers that are strictly less than n.

 

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0
 

// Constraints:

// 0 <= n <= 5 * 106

// Method 1: Brute Force using Modulus Operator Time complexity: O(n^2) Space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

// Method 1: Brute Force using Modulus Operator this will lead to TLE Time complexity: O(n^2) Space complexity: O(1)

// bool isPrime(int n)
// {
//     if(n <= 1) return false;

//     for(int j = 2; j < n; j++) // iterate from 2 to n-1 because 0 and 1 are not prime numbers
//     {
//         if(n % j == 0)  // if n is divisible by any number other than 1 and n then it is not prime
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int findCountPrime(int n)
// {
//     int ans = 0;  // to store the count of prime numbers
//     for(int i = 2; i < n; i++)   // iterate from 2 to n-1 because 0 and 1 are not prime numbers
//     {
//         if(isPrime(i))
//         {
//             ans++;
//         }
//     }
//     return ans;
// }


// Method 2: Brute Force using Modulus Operator but with iteration from 2 to sqrt(n) Time complexity: O(n*sqrt(n)) Space complexity: O(1)


// bool isPrime(int n)
// {
//     if(n <= 1) return false;
//     int limit = sqrt(n);
//     for(int j = 2; j <= limit; j++) // iterate from 2 to n-1 because 0 and 1 are not prime numbers
//     {
//         if(n % j == 0)  // if n is divisible by any number other than 1 and n then it is not prime
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int findCountPrime(int n)
// {
//     int ans = 0;  // to store the count of prime numbers
//     for(int i = 2; i < n; i++)   // iterate from 2 to n-1 because 0 and 1 are not prime numbers
//     {
//         if(isPrime(i))
//         {
//             ans++;
//         }
//     }
//     return ans;
// }

// Method 3: Sieve of Eratosthenes Time complexity: O(nloglogn) Space complexity: O(n)

// int findCountPrime(int n)
// {
//     int ans = 0;
//     vector<bool>isPrime(n, true); // to store the prime numbers and initialize all the numbers as prime
//     isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

//     for(int i = 2; i < n; i++)  // iterate from 2 to n-1 because 0 and 1 are not prime numbers
//     {
//         if(isPrime[i]) {    // if the number is prime then increment the count of prime numbers and mark all the multiples of the number as not prime since all are true initially
//             ans++;  // increment the count of prime numbers
//             int j = 2 * i;  // start from the first multiple of the number *2
//             while(j < n)  // iterate till the last multiple of the number
//             {
//                 isPrime[j] = false;  // mark the multiple as not prime
//                 j += i;  // increment the multiple by the number
//             }
//         }
//     }
//     return ans; // return the count of prime numbers
// }


// Method 4: Segmented Sieve Time complexity: O(nloglogn) Space complexity: O(sqrt(n))
// when two number low and high are given and we have to find the prime numbers between low and high
// Still TlE error on gfg

//  int findCountPrime(int L, int H)
//  {
//         int ans = 0;
//         vector<bool>isPrime(H - L + 1, true); // to store the prime numbers and initialize all the numbers as prime
//         if(L == 1) isPrime[0] = false; // 1 is not prime number
    
//         for(int i = 2; i * i <= H; i++)  // iterate from 2 to sqrt(H) because 0 and 1 are not prime numbers
//         {
//             for(int j = max(i * i, (L + i - 1) / i * i); j <= H; j += i) // iterate from i^2 to H and mark all the multiples of the number as not prime since all are true initially
//             {
//                 isPrime[j - L] = false;  // mark the multiple as not prime
//             }
//         }
//         for(int i = 0; i < H - L + 1; i++)  // iterate from 0 to H-L+1
//         {
//             if(isPrime[i]) ans++;  // if the number is prime then increment the count of prime numbers
//         }
//         return ans; // return the count of prime numbers
    
//  }


int main()
{
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;
    while(T--)
    {
        int n;
        cout << "Enter the number n to find the prime numbers less than n: ";
        cin >> n;
        cout << "The prime numbers less than " << n << " are: " << findCountPrime(n);
    }
    return 0;
}