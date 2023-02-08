#include<iostream>
using namespace std;

int main()
{
    int rowsCount,colsCount,space;

    cout << "enter the rows" << endl;

    cin >> rowsCount; //taking input rows

    cout << "enter the columns" << endl;

    cin >> colsCount;  //taking input columns

    for(int rows=0; rows<rowsCount; rows++)
    {
        //for first and last row
        if(rows==0 || rows==rowsCount-1)
        {
            for(int cols = 0; cols<colsCount; cols++)
            {
                cout << "*";
            }
        }

        else
        {
            //first star of hollow row
            cout << "*";

            //for spaces
            for(space=0; space<colsCount-2; space++)
            {
                cout << " ";
            }

             //last star of hollow row5
            cout << "*";

        }

        cout << endl; //newline
    }

    ////////////////op///////////////////////

    // *****
    // *   *
    // *   *
    // *****

   /////////////////////////////////////////////

    //for a rectangle hollow
    // int rows,cols,space;

    // for(rows=0; rows<4; rows++)
    // {
    //     if(rows==0 || rows==3)
    //     {
    //         for(cols=0; cols<5; cols++)
    //         {
    //             cout << "*";
    //         }
    //     }

    //     else
    //     {
    //         cout << "*";

    //         for(space=0; space < 3; space++)
    //         {
    //             cout <<" ";
    //         }

    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}