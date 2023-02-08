#include<iostream>
using namespace std;

int main()
{
    int rows,space,rowscount,stars;

    cout << "enter the number of rows: "<<endl; //taking number of rowscount as input

    cin >> rowscount;

    for(rows=0; rows<rowscount; rows++)
    {
        for(space=0; space<rowscount-(rows+1); space++)  // space will be total rows - current rows and plus one since starting from 0  for 0th row space will be 6-0+1 = 5 spaces if no of rowscpunt = 6;
        { 
            cout << " ";
        }

        for(stars=0; stars<rows+1; stars++)

        {
            cout <<"* ";  //stars will be equal to number of current row and +1 since starting from 0th index
        }

        cout<<endl; //newline
    }
}