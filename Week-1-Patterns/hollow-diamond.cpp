#include <iostream>
using namespace std;

int main()
{
    int row, cols, rowscount;
    cout << "Enter the number of rows: ";
    cin >> rowscount;
    for (row = 0; row < rowscount; row++)
    {
        for (cols = 0; cols < rowscount - row - 1; cols++) // inital spaces
        {
            cout << " ";
        }
        for (cols = 0; cols < 2 * row + 1; cols++) // total elements in each row 1-3-5-7 odd hence 2*ith-row+1
        {
            if (cols == 0 || cols == 2 * row) // first and last element stars
            {
                cout << "*";
            }
            else
            {
                cout << " "; // else space
            }
        }
        cout << endl;
    }
    for (row = 0; row < rowscount; row++) // total rows
    {
        for (cols = 0; cols < row; cols++) // initial space
        {
            cout << " ";
        }
        for (cols = 0; cols < 2 * rowscount - 2 * row - 1; cols++) // 7-6-5-3 reverse odd numbers = total(2*rowscount) - odd(2*row+1)
        {
            if (cols == 0 || cols == 2 * rowscount - 2 * row - 2) // first and last 0 to (2*rowscount-2*row-1)-1 since less then (2*rowscount-2*row-1)
            {
                cout << "*";
            }
            else
            {
                cout << " "; // else space
            }
        }
        cout << endl; // new line
    }
}
