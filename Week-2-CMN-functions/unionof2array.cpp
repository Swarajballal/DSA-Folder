#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int>ans)
{
    cout<<"The union of the array is: \n";
    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}

void unionofarray(int arr[], int sizea, int brr[], int sizeb)
{
    vector<int>ans;
    for(int i =0; i<sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i = 0; i<sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    printarray(ans);

}

int main()
{
    int arr[] = {1,2,3,4,5};
    int sizea = 5;
    int brr[] = {6,7,8,9,10};
    int sizeb = 5;
    unionofarray(arr,sizea,brr,sizeb);
    return 0;
}