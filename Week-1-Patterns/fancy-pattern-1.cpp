#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the number of rows: ";
    cin >> rowscount;
    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<rowscount+3-row; col++)  //for initial stars
        {
            cout<<"*";
        }
        for(col=0;col<row+1; col++)  //for *+rows 
        {
            if(col==0)
            {
                cout<<row+1;    //inital with no star
            }
            else
            {
                cout<<"*"<<row+1;
            }
        }
        for(col=0; col<rowscount+3-row; col++)   //post stars
        {
            cout<<"*";
        }
        cout<<endl;
    }
}