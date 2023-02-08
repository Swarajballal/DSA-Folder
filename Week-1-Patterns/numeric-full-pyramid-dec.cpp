#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the rowscount: ";
    cin >> rowscount;
    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<rowscount-row-1; col++)
        {
           cout<<" ";
        }
        for(col=0; col<row+1; col++)
        {
            cout<<col+1;
        }
        col = col-1;
        for(;col>=1; col--)
        {
            cout<<col;
        }
        cout<<endl;
    }
}