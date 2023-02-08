#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num,i,j,n;
    bool isprime;

    cout<<"Enter the Value of number: ";
    cin >> num;
    for(i=2; i<num; i++)
    {
        isprime=true;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime==true && num!=1)
        {
            cout<<i<<" is a Prime number."<<endl;
        }
    }

}