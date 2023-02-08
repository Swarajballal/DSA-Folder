#include <iostream>
using namespace std;

int main()
{
    int rowscount;

    cout << " enter the number of rowscount" << endl;

    cin >> rowscount; // taking number of rows as input

    for (int rows = 0; rows < rowscount; rows++)
    {
        for (int cols = 1; cols <= rowscount - rows; cols++)  //numbers is equal to the differnce of rowscount-rows
        {
            cout << cols;
        }

        cout << endl;  //new line
    }
}