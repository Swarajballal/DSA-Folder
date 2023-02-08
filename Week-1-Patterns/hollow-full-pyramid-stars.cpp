#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number of rows: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k = 0;                              // at every row k starts from 0
        for (int j = 0; j < ((2 * n) - 1); j++) // total columns will be 2*n-1
        {
            if (j < n - i - 1) // intial spaces
            {
                cout << " ";
            }
            else if (k < 2 * i + 1) // for total number of elements in each row
            {
                if (k == 0 || k == 2 * i || i == n - 1) // at k=0 starting of element till end of row element to be printes(2*i) and last row i==n-1
                {
                    cout << "*";
                }
                else
                {
                    cout << " "; // else spaces
                }
                k++; // increase k
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl; // new line
    }
}