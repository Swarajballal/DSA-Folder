#include <bits/stdc++.h>
using namespace std;

bool isPossibleSol(int A[], int n, int M, int sol)
{
    int pageSum = 0, c = 1; // c is the no. of students and pageSum is the sum of pages allocated to a student

    for (int i = 0; i < n; i++)
    {
        if (A[i] > sol) // if no. of pages in a book is greater than sol, return false
        {
            return false;
        }

        if (pageSum + A[i] > sol) // if sum of pages allocated to a student is greater than sol, increment c and reset pageSum
        {
            c++;            // increment no. of students
            pageSum = A[i]; // reset pageSum to the no. of pages in the current book
            if (c > M)      // if no. of students is greater than M, return false
            {
                return false;
            }
        }
        else
        {
            pageSum += A[i]; // if sum of pages allocated to a student is less than sol, add the no. of pages in the current book to pageSum
        }
    }
    return true; // if no. of students is less than or equal to M, return true
}

int findPages(int A[], int n, int M)
{
    int start = 0, end = accumulate(A, A + n, 0); // sum of all elements using STL accumulate to get max sum
    int ans = -1;
    // if no solution is possible
    if (M > n)
        return -1; // if no. of students is greater than no. of books

    while (start <= end) // binary search
    {
        int mid = start + (end - start) / 2;

        if (isPossibleSol(A, n, M, mid)) // if solution is possible
        {
            ans = mid;     // store the solution
            end = mid - 1; // search for smaller solution
        }
        else
        {
            start = mid + 1; // search for larger solution
        }
    }
    return ans;
}

int main()
{
    int A[] = {12, 34, 67, 90};
    int n = sizeof(A) / sizeof(A[0]);
    int M = 2;
    int result = findPages(A, n, M);
    cout << "Minimum number of pages = " << result << endl;
    return 0;
}