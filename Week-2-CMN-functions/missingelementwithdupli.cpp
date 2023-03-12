#include <iostream>
using namespace std;

void findmissing(int *a, int n)
{
    // method  visited method  time complexity: O(n) and space complexity: O(1)
    //  for(int i = 0; i < n; i++)
    //  {
    //      int index = abs(a[i]); // abs() is used to get the absolute value of the number
    //      if(a[index - 1] > 0) // if the element is positive then make it negative
    //      {
    //          a[index - 1] *= -1;
    //      }
    //  }

    // all positive elements are missing
    //  for(int i = 0; i < n; i++)
    //  {
    //      if(a[i] > 0)
    //      {
    //          cout << i + 1 << " ";  //i+1 because index starts from 0
    //      }
    //  }

    // method 2: sorting + swapping method time complexity: O(n) time complexity and space complexity: O(1)

    for(int i = 0; i < n;)
    {
        int index = a[i] - 1;  // index of the element i.e index - 1 if 3 a[i] then index = 3-1 = 2 from 0-2 = 3.

        if(a[i] != a[index])  // if the element is not at its correct position then swap it
        {
            swap(a[i], a[index]);
        }
        else
        {
            i++; // if the element is at its correct position then move to the next element if not keep swapping
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] != i+1)    // if the element is not at its correct position then print it
        {
            cout << i + 1 << " ";
        }
    }
}
int main()
{
    int n;
    int a[] = {1, 3, 5, 3, 4};
    n = sizeof(a) / sizeof(int);
    findmissing(a, n);
    return 0;
}
