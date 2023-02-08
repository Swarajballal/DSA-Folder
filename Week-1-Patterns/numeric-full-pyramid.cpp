#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: "<<endl;;
    cin >> n;
    for(int i=0; i<n; i++)    //total no of rows
    {
        int count = i;
        int k=0;
        for(int j=0; j<(2*n)-1; j++)     //total columns
        {
            if(j<n-i-1)    //initial spaces
            {
                cout << " ";
            }
            else if(k<(2*i+1))   //total elements in each row
            {
                if(k<=i)        //increment till which index:increment from k=0 index till 1 if total elements equal to 3 where row would be i=1; hence k<=i 
                {
                    cout<< count+1;
                    count++;
                }
                else
                {
                    count--;   //decrement at which index
                    cout<<count;
                }
                k++;
            }
            else
            {
                cout<<" ";     // else spaces
            }
        }
        cout<<endl;   //new line
    }
}