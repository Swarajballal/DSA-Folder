#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the rowscount: ";
    cin >> rowscount;

    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<rowscount; col++)
        {
            if(row==0 || row==rowscount-1 || col==0 || col==rowscount-1)    //first row || last row || first column || last column
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";  //spaces
            }
          
        }
        cout<<endl;  //newline
    }
}