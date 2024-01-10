#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the total number of rows: ";
    cin >> rowscount;
    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<row+1; col++)
        {
            cout<<"* ";
        }
        for(col=0; col<rowscount-row; col++)
        {
            cout <<"  ";
        }
        for(col=0; col<rowscount-row; col++)
        {
            cout <<"  ";
        }
        for(col=0; col<row+1; col++)
        {
            cout<<"* ";
        }
       cout<< endl;
    }
     for(row=0; row<rowscount; row++)
    {
        for(col=0; col<rowscount-row; col++)
        {
            cout << "* ";
        }
        for(col=0; col<row+1; col++)
        {
            cout<<"  ";
        }
        for(col=0; col<row+1; col++)
        {
            cout<<"  ";
        }
        for(col=0; col<rowscount-row; col++)
        {
            cout << "* ";
        }
       cout<< endl;
    }

}