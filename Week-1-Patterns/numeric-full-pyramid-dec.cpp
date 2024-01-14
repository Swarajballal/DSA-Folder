#include<iostream>
using namespace std;

int main()
{
//    int row,col,rowscount;
//    cout<<"Enter the rowscount: ";
//    cin >> rowscount;
//    for(row=0; row<rowscount; row++)
//    {
//        for(col=0; col<rowscount-row-1; col++)
//        {
//           cout<<" ";
//        }
//        for(col=0; col<row+1; col++)
//        {
//            cout<<col+1;
//        }
//        col = col-1;
//        for(;col>=1; col--)
//        {
//            cout<<col;
//        }
//        cout<<endl;
//    }


//    int rows;
//    cout<<"Enter the number of rows: ";
//    cin >> rows;
//    for(int row = 0; row < rows; row++) {
//        for(int space = 0; space < rows - row - 1; space++) {
//            cout << " ";
//        }
//        for(int col = 0; col < 2*row + 1; col++){
//            if(col < row+1) {
//                cout << col + 1;
//            }else {
//                cout << 2*row - col + 1;
//            }
//        }
//        cout << endl;
//    }
//    return 0;


// one more method with 2 for loops

    int rows;
    cout<<"Enter the number of rows: ";
    cin >> rows;
    int k = rows;
    for(int row = 0; row < rows; row++) {
        int c = 1;
        for(int col = 0; col < k; col++){
            if(col < rows - row - 1){
                cout << " ";
            }else if(col <= rows - 1){
                cout << c;
                c++;
            }else if(col == rows){
                c = c - 2;
                cout << c;
                c--;
            }else{
                cout << c;
                c--;
            }
        }
        k++;
        cout << endl;
    }
    return 0;

}