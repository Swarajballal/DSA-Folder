#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the number of rows: ";
    cin >> rowscount;
    for(row=1; row<=rowscount; row++)
    {
        for(col=1; col<rowscount-row+1; col++)
        {
            cout<<" ";
        }
        
        int val = 1;
        for(col=1; col<=row; col++)
        {
            cout<<val<<" ";
            val = val*(row-col)/col;
        }
        cout<<endl;
    }
}