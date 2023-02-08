#include <iostream>
using namespace std;

int main()
{
    int rowscount, stars;
    cout << "enter the number of rows:" << endl;
    cin >> rowscount; // taking the number of rows

    for (int rows = 1; rows < rowscount; rows++)
    {
        for (stars = 1; stars < rows; stars++) // number of stars is equal to the number of rows
        {
            cout << "*";
        }
        cout << endl; // newline
    }
}