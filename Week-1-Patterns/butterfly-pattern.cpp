#include<iostream>
using namespace std;

int main()
{
//    int row,col,rowscount;
//    cout<<"Enter the total number of rows: ";
//    cin >> rowscount;
//    for(row=0; row<rowscount; row++)
//    {
//        for(col=0; col<row+1; col++)
//        {
//            cout<<"* ";
//        }
//        for(col=0; col<rowscount-row; col++)
//        {
//            cout <<"  ";
//        }
//        for(col=0; col<rowscount-row; col++)
//        {
//            cout <<"  ";
//        }
//        for(col=0; col<row+1; col++)
//        {
//            cout<<"* ";
//        }
//       cout<< endl;
//    }
//     for(row=0; row<rowscount; row++)
//    {
//        for(col=0; col<rowscount-row; col++)
//        {
//            cout << "* ";
//        }
//        for(col=0; col<row+1; col++)
//        {
//            cout<<"  ";
//        }
//        for(col=0; col<row+1; col++)
//        {
//            cout<<"  ";
//        }
//        for(col=0; col<rowscount-row; col++)
//        {
//            cout << "* ";
//        }
//       cout<< endl;
//    }


    // Method 2

    int rows;
    cout<<"Enter the total number of rows: ";
    cin >> rows;

    for(int row = 0; row < 2*rows; row++){
        int cond = row < rows ? row : 2*rows - row - 1;
        int space_count = row < rows ? 2*(rows - row - 1) : row - cond - 1;
        for(int col = 0; col < 2*rows; col++){
            if(col <= cond){
                cout << "*";
            }else if(space_count){
                cout << " ";
                space_count--;
            }else {
                cout << "*";
            }
        }
        cout << endl;
    }

}