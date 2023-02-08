#include<iostream>
using namespace std;

int main()
{
    int rowscount;
    cout<<"Enter the number of rows: ";
    cin >> rowscount;
    int num = 1;
    for(int row=0; row<rowscount; row++)
    {
        for(int col=0; col<2*row+1; col++)
        {
            if(col%2==0)
            {
                cout<<num;
                num++;
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

        int num2 = 2*rowscount-1;
        for(int row=0; row<rowscount; row++)
        {
            int col=0;
            for(;col<2*rowscount-2*row-1; col++)
            {
                if(col%2==0)
                {
                    cout<<num2;
                    num2++;
                }
                else
                {
                    cout<<"*";
                }
            }
            num2 = num2-col; 
            cout<<endl;
        }
}