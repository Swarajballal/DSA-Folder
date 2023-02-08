#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the number of rows: ";
    cin >> rowscount;
    int num = 1;
    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<row+1; col++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}