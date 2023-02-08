#include<iostream>
using namespace std;

int main()
{
    int row,col;
    //no of rows
    for(int row=0; row<3; row++)
    {
        //no of columns
        for(int col=0; col<5; col++)
        {
            cout << "*";
        }
        cout << endl; //newline
    }
}