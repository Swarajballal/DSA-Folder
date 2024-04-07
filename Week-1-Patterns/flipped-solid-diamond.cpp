#include <iostream>
using namespace std;

int main()
{
    int row, col, rowscount;
    cout << "Enter the number of rows: ";
    cin >> rowscount;
    
    for (row = 0; row < rowscount; row++)
    {
        // half pyramid
        for (col = 0; col < rowscount - row; col++)
        {
            cout << "*";
        }
        // full space pyramid
        for (col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        // half pyramid
        for (col = 0; col < rowscount - row; col++)
        {
            cout << "*";
        }

        cout << endl; // newlinw
    }
    for (row = 0; row < rowscount; row++)
    {
        // half pyramid
        for (col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        // inverse full pyramid
        for (col = 0; col < 2 * rowscount - 2 * row - 1; col++)
        {
            cout << " ";
        }
        // half pyramid
        for (col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}