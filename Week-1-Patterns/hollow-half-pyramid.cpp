#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the rowscount: ";
    cin >> rowscount;
    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<rowscount-row; col++)  //inverted pyramid
        {
            if(col==0 || col==rowscount-row-1 || row==0)  //first column || current row last element || first row
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl; //new-line
    }
}