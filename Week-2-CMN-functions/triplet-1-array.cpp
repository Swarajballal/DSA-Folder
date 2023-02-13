#include<iostream>
#include<vector>
using namespace std;

void triplet(vector<int> arr, int sum)
{
    int flag = false;
      //outer loop
    for(int i = 0; i< arr.size(); i++)
    {
        int elementouter = arr[i];
        //inner loop
        for(int j = i+1; j< arr.size(); j++)
        {
            int elementinner = arr[i];
            // inner inner loop
            {
                if(flag != true)
                {
                     for(int k = j+1; k < arr.size(); k++)
                     {
                        if(elementouter + elementinner + arr[k] == sum)
                        {
                            flag = true;
                            cout<<" Sum of triplet equal to "<<sum <<" are "<<elementouter<<", "<<elementinner<<" and "<<arr[k]<<endl;
                        }

                     }
                }
            }
        }
    }
    if(flag != true)
    {
        cout<<"No triplets found"<<endl;
    }
}


int main()
{
    int sum;
    cout<<"Enter the sum to find the triplets for: "<<endl;
    cin >> sum;
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    triplet(arr, sum);
    return 0;
}