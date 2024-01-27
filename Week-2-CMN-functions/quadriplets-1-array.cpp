#include<iostream>
#include<vector>
using namespace std;

void quadraplets(vector<int> arr, int sum)
{
    bool flag = false;
    for(int i =0; i<arr.size(); i++)
    {
        int element1 = arr[i];
        for(int j=i+1; j<arr.size(); j++)
        {
            int element2 = arr[j];
            for(int k = j+1; k<arr.size(); k++)
            {
                int element3 = arr[k];

                // if(flag != true)
                // {

                    for(int l=k+1; l < arr.size(); l++)
                    {
                        int element4 = arr[l];
                        if(element1 + element2 + element3 + element4 == sum)
                        {
                            cout<<" Quadraplets are: "<<element1<<" "<<element2<<" "<<element3<<" "<<element4<<endl;
                            flag = true;

                        }
                    }

                // }
            }
        }
    }
    if(flag != true)
    {
        cout<<"No quadraplets found"<<endl;
    }
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int sum;
    cout<<"Enter the number to find the quadraplets: ";
    cin >> sum;
    quadraplets(arr, sum);
}