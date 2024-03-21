#include<iostream>
using namespace std;

int main()
{
    int total_rows;
    cout << "Enter the nunber of rows: ";
    
    cin >> total_rows;
    for(int row = 0; row < total_rows; row++) {
        // for spaces
        for(int col = 0; col < total_rows - row - 1; col++) {
            cout << " ";
        }
        // numbers
        for(int col = 0; col < row+1; col++) {
            cout << col + row + 1;
        }

        // reverse numbers
        int start = 2*row;
        for(int col = 0; col < row; col++) {
            cout << start;
            start--;
        }
        cout << endl;
    }
}