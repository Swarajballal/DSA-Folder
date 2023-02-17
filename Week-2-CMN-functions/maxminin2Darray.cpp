#include<iostream>
#include<limits.h>
using namespace std;


int minNoin2Darray(int arr[][3], int rows, int cols)
{
    int min = INT_MAX;

    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            if(arr[i][j] < min)
            {
                min= arr[i][j];
            }
        }
    }
    return min;
}



int maxNoin2Darray(int arr[][3], int rows, int cols)
{
    int max = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int arr[3][3] = {{10,2,3},{4,5,15},{1,8,12}};
    int rows = 3;
    int cols = 3;
    int max =  maxNoin2Darray(arr, rows, cols);
    int min = minNoin2Darray(arr, rows, cols);
    cout << "Max No in 2D array: " << max << endl;
    cout<< "Min No in 2D array: " << min << endl;
    return 0;
}