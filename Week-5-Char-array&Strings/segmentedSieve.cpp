#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n; i++)
    {
        if(isPrime[i]) {
            for(int j = i*i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

vector<bool> segmentedSieve(int L, int R) {
    vector<bool>sieve = sieveOfEratosthenes(sqrt(R));
    vector<int>basePrimes;
    for(int i = 0; i < sieve.size(); i++)
    {
        if(sieve[i])
        {
            basePrimes.push_back(i);
        }
    }

    vector<bool>segSieve(R-L+1, true);
    if(L == 1 || L == 0) {
        segSieve[L] = false;
    }

    for(auto prime:basePrimes) {
        int first_mul = (L / prime) * prime;
        if(first_mul < L) {
            first_mul += prime;
        }
        for(int j = max(first_mul, prime * prime); j <= R; j += prime) {
            segSieve[j-L] = false;
        }
    }

    return segSieve;
}

int main()
{
    int L, R;
    cout << "Enter the value of L and R: "<<endl;
    cin >> L >> R;

    vector<bool>segmentedSieveAns = segmentedSieve(L,R);

    for(int i=0; i < segmentedSieveAns.size(); i++)
    {
        if(segmentedSieveAns[i]) {
            cout << i + L << " ";
        }
    }
    return 0;
}
