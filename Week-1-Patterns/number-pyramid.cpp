#include <iostream>
using namespace std;

int main()
{
    int rows, cols, rowscount;

    cout << "enter the number of rows" << endl;

    cin >> rowscount; // input number of rows

    for (rows = 1; rows <= rowscount; rows++)
    {
        for (cols = 1; cols <= rows; cols++)
        {
            cout << cols; // numeric pyramid is equal to the number of rows
        }

        cout << endl;  // new line
    }
}