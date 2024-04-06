#include <iostream>
using namespace std;

int main ()
{
    int row,col,rowscount;
    cout<<"Enter the number of rows: ";
    cin >> rowscount;
    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<row+1; col++)
        {
            if(col==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<col<<" ";
            }
        }
        int num = row-1;
        
        for(col=0; col<row; col++)
        {
            if(col==row-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<num--<<" ";
            }
        }
        cout<<endl;
    }

    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<rowscount-row-1; col++)
        {
            if(col==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<col<<" ";
            }
        }
        int num = col-2;
        for(col=0; col<rowscount-row-2; col++)
        {
            if(col==rowscount-row-3)
            {
                cout<<"* ";
            }
            else
            {
                cout<<num--<<" ";
            }
        }
        cout<<endl;
    }
}