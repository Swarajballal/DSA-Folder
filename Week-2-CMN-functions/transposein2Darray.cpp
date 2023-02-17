#include<iostream>
using namespace std;


void print2darray(int arr[][3], int rows, int cols)
{
    cout<<"2D array:"<<endl;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//because of double swap, it is not working it returns to original array dry run it after 10 index it will swap to original array
// void transpose(int arr[][3], int rows, int cols)
// {
//     cout<<"Transpose of 2D array:";
//     for(int i = 0; i<rows; i++)
//     {
//         for(int j = 0; j<cols; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//         cout << endl;
//     }
// }

//correct way
void transpose(int arr[][3], int rows, int cols,int transposedarr[][3])
{
    cout<<"Transpose of "<<endl;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
           transposedarr[j][i] = arr[i][j];
        }
    }
}

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    int transposedarr[3][3];
    print2darray(arr, rows, cols);
    transpose(arr, rows, cols, transposedarr);
    print2darray(transposedarr, rows, cols);
    return 0;
}