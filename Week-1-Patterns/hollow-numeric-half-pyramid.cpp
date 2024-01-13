#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the number of rowscount: ";
    cin >> rowscount;

    for(row=0; row<rowscount; row++)
    {
        for(col=0; col < row+1; col++)
        {
           if(col==0 || col==row || row==rowscount-1)   //first column || last elemnt of each row || last row
           {
            cout<<col+1;
           }
           else
           {
            cout<<"";
           }
            
        }
        cout<<endl;
    }
}