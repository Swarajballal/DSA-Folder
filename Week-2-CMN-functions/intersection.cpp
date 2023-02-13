#include <iostream>
#include <vector>
using namespace std;
// intersection of 2 arrays
void intersection(vector<int> arr, vector<int> brr, vector<int> ans)
{
    // outer loop
    for (int i = 0; i < arr.size(); i++) // loop for arr array in brr array
    {
        int element = arr[i]; // every element of arr array
        // inner loop
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j]) // if element of arr array is equal to element of brr array
            {
                // if duplicate value are present then once they are checked replace them with -1 so that in next iteration they are not counted again
                // marking the element as -1
                brr[j] = -1;            // if there were negative numbers then we would have replaced -1 with INT_MIN
                ans.push_back(element); // push the element in ans array
            }
        }
    }

    // print the array
    for (auto value : ans)
    {
        cout << "The intersection of the array is: " << value << endl;
    }
}

int main()
{
    vector<int> arr{1, 3, 3, 4, 5};
    vector<int> brr{6, 7, 3, 3, 4};
    vector<int> ans;
    intersection(arr, brr, ans);
    return 0;
}
