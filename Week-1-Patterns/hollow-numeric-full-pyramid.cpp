#include<iostream>
using namespace std;

int main()
{
    int n,j,i;
    cout<<"Enter the number of rows: ";
    cin >> n;

    for(i=0; i<n; i++)     //for total number of rows
    {
        for(j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        int start = 1;
        for(j=0; j<2*i+1; j++)
        {
            if(i==0 || i==n-1)
            {
                if(j%2==0)
                {
                    cout<<start;
                    start++;
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if(j==0)
                {
                    cout<<"1";
                }
                else if(j==2*i)
                {
                    cout<<i+1;
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}