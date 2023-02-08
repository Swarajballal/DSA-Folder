#include <iostream>
using namespace std;

int main()
{
    int rowscount;
    cout << "enter the number of rows:" << endl;
    cin >> rowscount; // taking input number of rows

    for (int rows = 0; rows < rowscount; rows++)
    {
        for (int stars = 0; stars < rowscount - rows; stars++) // stars for inverse will equal to rowscount - stars for each row
        {
            cout << "*";
        }
        cout << endl; // new line
    }
}