#include<iostream>
using namespace std;

int main()
{
    int rows, rowscount, stars, spaces;

    cout << "Enter the number of rows: " << endl;

    cin >> rowscount;

    for(rows=0; rows < rowscount; rows++)
    {
        //For spaces it will be equal to number of rows

        for(spaces=0; spaces<rows; spaces++)
        {
            cout << " ";
        }
        // stars willl be equal to total rows - rows  e.g if rowscount = 6 then rows = 0 then stars in first row will be equal to 6 and space 0
        for(stars=0; stars<rowscount-rows; stars++)
        {
            cout << "* ";
        }

        cout << endl; //newline
    }
}