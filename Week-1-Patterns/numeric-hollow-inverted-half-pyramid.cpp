#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the number of row: ";
    cin >> rowscount;

    for(row=0; row <rowscount; row++)
    {
        for(col=0; col<rowscount-row; col++)
        {
            if(col==0)
            {
                cout<<row+1;
            }
            else if(col==rowscount-row-1)
            {
                cout<<"5";
            }
            else if(row==0)
            {
                cout<<col+1;
            }
            else
            {
                cout<<" ";
            }
        }
         cout << endl;
    }
}