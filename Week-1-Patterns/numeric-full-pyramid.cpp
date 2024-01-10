#include<iostream>
using namespace std;

int main()
{
    int total_rows;
    cout << "Enter the nunber of rows: ";
    cin >> total_rows;
    for(int row = 0; row < total_rows; row++) {
        int k = 0;
        int count = row+1;
        for(int col = 0; col < (2*total_rows) - 1; col++){
            if(col <= (total_rows - row - 1)){
                cout << " ";
            }

            else if(k<(2*row+1)) {
                if (k <= row) {
                    cout << count;
                    count++;
                } else {
                    count--;
                    cout << count;
                }
                k++;5
            }
        }
        cout << endl;
    }
}