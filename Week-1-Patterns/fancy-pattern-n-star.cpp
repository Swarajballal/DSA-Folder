#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the number of rowscount: ";
    cin >> rowscount;
    for(row=0; row<rowscount; row++)  //total rows
    {
        for(col=0; col<row+1; col++) //elements in each row
        {
            if(col==0)              //first element without star
            {
                cout<<row+1;
            }
            else
            {
                cout<<"*"<<row+1;      //else *+element at that place
            }
            
        }
        cout<<endl;      //new-line
    }

        for(row=0; row<rowscount; row++)          //total rows
    {
        for(col=0; col<rowscount-row; col++)      //total elements rowscount-row
        {
            if(col==0)          //first element
            {
                cout<< rowscount-row;
            }
            else
            {
                cout<<"*"<<rowscount-row;      //rest of the elements with *+element at that position
            }
            
        }
        cout<<endl;  //new-line
    }
}