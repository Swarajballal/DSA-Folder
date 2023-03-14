#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v)
{
    // columnswise print
    //  int m = v.size();    // number of rows in vector since recall vector<vector>
    //  int n = v[0].size(); // number of columns in vector i.e vectors 1 element is also a vector whos size is number of columns

    // for (int startCol = 0; startCol < n; startCol++) // chevk columns even or odd
    // {
    //     // if even columnm then print top to bottom
    //     if ((startCol & 1) == 0) // number & 1 will give 0 if even and 1 if odd
    //     {
    //         for (int i = 0; i < m; i++)
    //         {
    //             cout << v[i][startCol] << " ";
    //         }
    //         cout << endl;
    //     }
    //     // if odd column then print bottom to top
    //     else
    //     {
    //         for (int i = m - 1; i >= 0; i--)
    //         {
    //             cout << v[i][startCol] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    // rowwise print
    int m = v.size();    // number of rows in vector since recall vector<vector>
    int n = v[0].size(); // number of columns in vector i.e vectors 1 element is also a vector whos size is number of columns
    for (int startRow = 0; startRow < m; startRow++)
    {
        if ((startRow & 1) == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[startRow][i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << v[startRow][i] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
    };

    wavePrintMatrix(v);

    return 0;
}