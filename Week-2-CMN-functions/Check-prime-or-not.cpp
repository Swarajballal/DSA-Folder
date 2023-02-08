#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin >> num;

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            cout<<num<<" is Not a Prime Number. ";
            break;
        }
        else
        {
            cout<<num<<" is a Prime Number. ";
            break;
        }
    }
    return 0;

}