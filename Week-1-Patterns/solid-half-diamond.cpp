#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the numner of row: ";
    cin >> rowscount;
    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<row+1; col++)    //normal half soild pyramid
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(row=0; row<rowscount; row++)
    {
        for(col=0; col<rowscount-row-1; col++)  //normal inverted solid half pyramid
        {
            cout<<"*";
        }
        cout<<endl;
    }
}