#include<iostream>
using namespace std;

int main()
{
    int row,cols,rowscount;
    cout<<" Enter the number of rows: ";
    cin >> rowscount;

    for(row=0; row<rowscount; row++)
    {
        for(int space=0; space< rowscount-row-1; space++)  //for spaces
        {
            cout<<" ";
        }
        for(cols=0; cols<row+1; cols++)      //total stars in a row is row + 1 for cols = 0; 1st row = 0+1= 1star and so on hence 0 to < row+1
        {
            cout<<"* ";
        }
        cout<<endl;  //new linw
    }

    for(row=0; row<rowscount; row++)
    {
        for(int space=0; space<row; space++)   //initial spaces
        {
            cout<<" ";
        }
        for(cols=0; cols<rowscount-row; cols++)  //stars at total-spaces
        {
            cout<<"* "; 
        }
        cout<<endl;  //newline
    }

       
}