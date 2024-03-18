// Catalan number are a sequence of natural numbers that occurs in various counting problems, often involving recursively-defined objects. In terms of binomial coefficients, the nth Catalan number is given directly in terms of binomial coefficients by.

#include<bits/stdc++.h>
using namespace std;

int catalan(int n)
{
    if(n <= 1) return 1;  // when n = 0 or 1, return 1; for C0 = 1 and C1 = 1
    
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        res += catalan(i) * catalan(n-i-1);  // Cn = C0Cn-1 + C1Cn-2 + C2Cn-3 + ... + Cn-1C0
    }
    return res; // return the result
}
 
int main()
{
    cout << "Catalan series is :" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << catalan(i) << " "; // print the first 10 numbers of the catalan series
    }
    
    return 0; 
}



