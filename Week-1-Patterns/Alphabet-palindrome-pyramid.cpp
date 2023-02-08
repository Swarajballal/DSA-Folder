#include<iostream>
using namespace std;

int main()
{
    int row,col,rowscount;
    cout<<"Enter the number of rows: ";
    cin >> rowscount;
    for(row=0; row<rowscount; row++)
    {
        for(col=0; col<row+1; col++)   //normal increasing half pyramid 1 to < row+1(+1 since col=0) 
        {
            int ans = col+1;         //stored int in a variable
            char ch = ans+'A'-1;    //adding that to a char since o/p is alphabet
            cout<< ch;               //o/p character
        }
        col = col-1;                //for reverse start point is previous end point
        for(;col>=1; col--)         // till = 1
        {
            int ans = col;
            char ch = ans+'A'-1;    //same as above -1 since it starts from B to make A -1 is used
            cout<<ch;
        }
        cout<<endl;
    }
}