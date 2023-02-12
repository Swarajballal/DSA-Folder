#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<vector<int> >arr;
    // vector<int> a{1,2,3};
    // vector<int> b{2,4,6};
    // vector<int> c{1,3,7};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0;i<arr.size();i++)
    // {
    //     for(int j=0;j<arr[i].size();j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector of vector with paramter
    //  vector<vector<int> >arr(no-of-rows-sizeof-outer-vector,vector<int>(sizeof-inner-vector,value-to-be-initialized-with));
    //  here no of rows for outer and inner vector is the same and inner vector column is 5 with values 8
    vector<vector<int>> arr(5, vector<int>(5, -8));
    return 0;
}