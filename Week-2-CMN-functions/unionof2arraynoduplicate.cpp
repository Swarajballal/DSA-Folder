#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void unionof2arraynoduplicate(vector<int> arr, vector<int> brr, vector<int> ans)
{
    for(int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for(int j = 0; j < brr.size(); j++)
        {
            if(element == brr[j])
            {
                brr[j] = INT_MIN;
            }
        }
    }

    for(int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

    for(int i = 0; i < brr.size(); i++)
    {
        if(brr[i] != INT_MIN)
        {
            ans.push_back(brr[i]);
        }
    }
    

    //print the vector
    for(auto value : ans)
    {
        cout << "The union of the array is: " << value << endl;
    }
}
int main()
{
    vector<int> arr{1, 2, 4, 6, 8, 10};
    vector<int> brr{3, 4, 5, 6};
    vector<int> ans;
    unionof2arraynoduplicate(arr, brr, ans);
    return 0;
}