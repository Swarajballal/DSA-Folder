#include<iostream>
using namespace std;

int main()
{
//    int row,col,rowscount;
//    cout<<"Enter the numner of row: ";
//    cin >> rowscount;
//    for(row=0; row<rowscount; row++)
//    {
//        for(col=0; col<row+1; col++)    //normal half soild pyramid
//        {
//            cout<<"*";
//        }
//        cout<<endl;
//    }
//     for(row=0; row<rowscount; row++)
//    {
//        for(col=0; col<rowscount-row-1; col++)  //normal inverted solid half pyramid
//        {
//            cout<<"*";
//        }
//        cout<<endl;
//    }

    int rows;
    cout<<"Enter the number of rows: ";
    cin >> rows;

    for(int row = 0; row < 2*rows - 1; row++){
        int cond = 0;
        if(row < rows) {
            cond = row;
        }else{
            cond = rows - (row % rows) - 2;
        }
        for(int col = 0; col <= cond; col++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}