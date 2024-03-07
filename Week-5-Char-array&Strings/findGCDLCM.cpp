// LCM And GCD GFG 
// BasicAccuracy: 37.02%Submissions: 97K+Points: 1
// Internship Alert
// New month-> Fresh Chance to top the leaderboard and get SDE Internship! 

// banner
// Given two numbers A and B. The task is to find out their LCM and GCD.

 

// Example 1:

// Input:
// A = 5 , B = 10
// Output:
// 10 5
// Explanation:
// LCM of 5 and 10 is 10, while
// thier GCD is 5.
// Example 2:

// Input:
// A = 14 , B = 8
// Output:
// 56 2
// Explanation:
// LCM of 14 and 8 is 56, while
// thier GCD is 2.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function lcmAndGcd() which takes an Integer N as input and returns a List of two Integers, the required LCM and GCD.

// Expected Time Complexity: O(log(min(A, B))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= A,B <= 109

#include<bits/stdc++.h>
using namespace std;

// to find one method could be to find all prime factors brute force and then find lcm and gcd
// Other way is to use Euclidean algorithm to find gcd and then use the formula to find lcm
// formula is gcd(a, b) * lcm(a, b) = a*b
// gcd(a,b) = (a-b, b) if a > b else (b-a, a) for b > a
int findGcd(int A, int B)
{
     if (A == 0)return 0;  // if any of the number is 0 then gcd is the other number
     if (B == 0)return 0;   // if any of the number is 0 then gcd is the other number
     
     while(A > 0 && B > 0) // using euclidean algorithm to find gcd
     {
         if(A > B) // if A is greater than B then subtract B from A
         {
             A = A - B; 
         }
         else
         {
             B = B - A;
         }
     }
     return A == 0 ? B : A; // return the non zero number
}

vector<int> findGcdLcm(int A, int B)
{
    vector<int> ans;
    int gcd = findGcd(A, B);
    int lcm = (A*B)/gcd;  // using the formula to find lcm i.e. gcd(a,b) * lcm(a,b) = a*b
    ans.push_back(lcm);
    ans.push_back(gcd);
    return ans;
}

int main()
{
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;
    while(T--)
    {
        int A, B;
        cout << "Enter the value of A and B: ";
        cin >> A >> B;
        vector<int> ans =  findGcdLcm(A, B);
        cout << "LCM: " << ans[0] << " GCD: " << ans[1] << endl;
    }
    return 0;
}