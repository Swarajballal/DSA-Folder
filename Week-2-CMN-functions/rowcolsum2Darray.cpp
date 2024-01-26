#include<iostream>
using namespace std;

void printRowiseSum(int arr[][3],int rows,int cols)
{
    cout<<"Row-wise sum of 2D array is: "<<endl;
    for(int i=0;i<rows;i++)
    {
        int sum = 0;
        for(int j=0;j<cols;j++)
        {
            sum += arr[i][j];
        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;
    }
}

void printColwiseSum(int arr[][3],int rows,int cols)
{
    cout<<"Col-wise sum of 2D array is: "<<endl;
    for(int i=0;i<rows;i++)
    {
        int sum = 0;
        for(int j=0;j<cols;j++)
        {
            sum += arr[j][i];

        }
        cout<<"Sum of Col is "<<i<<" is"<<sum<<endl;
    }
}

int main()
{
    //row-wise traversal
    int arr[3][3] = {{1,6,3},{4,7,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    printRowiseSum(arr,rows,cols);
    printColwiseSum(arr,rows,cols);
    return 0;
}