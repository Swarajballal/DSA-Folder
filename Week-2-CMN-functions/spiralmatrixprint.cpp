#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int m = matrix.size();                                          // row
    int n = matrix[0].size();                                       // col
    int total_ele = m * n;                                          // total elements
    int startRow = 0, endCol = n - 1, endRow = m - 1, startCol = 0; // start and end row and col
    int count = 0;
    vector<int> ans;

    while (count < total_ele) // till all elements are not printed
    {
        // first row print
        for (int i = startCol; i <= endCol && count < total_ele; i++) // from start col to end col
        {
            ans.push_back(matrix[startRow][i]); // start row is fixed
            count++;                            // count the elements printed
        }
        startRow++; // start row is incremented so that next time duplicate numbers are not printed
        // last column print
        for (int i = startRow; i <= endRow && count < total_ele; i++)
        {
            ans.push_back(matrix[i][endCol]); // end col is fixed
            count++;
        }
        endCol--; // end col is decremented so that next time duplicate numbers are not printed
        // last row print
        for (int i = endCol; i >= startCol && count < total_ele; i--)
        {
            ans.push_back(matrix[endRow][i]); // end row is fixed
            count++;
        }
        endRow--; // end row is decremented so that next time duplicate numbers are not printed
        // last row print
        for (int i = endRow; i >= startRow && count < total_ele; i--)
        {
            ans.push_back(matrix[i][startCol]); // start col is fixed
            count++;
        }
        startCol++; // start col is incremented so that next time duplicate numbers are not printed
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix{{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12}};


    vector<int> result = spiralOrder(matrix);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}