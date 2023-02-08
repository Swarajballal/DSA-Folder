#include<iostream>
using namespace std;

void evenorodd(int num)
{
    if(num%2==0)
    {
        cout<<num<<" "<<"is an Even Number";
    }
    else
    {
        cout<<num<<" "<<"is an Odd Number";
    }
    
}

int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin >> num;
    evenorodd(num);
    return 0;
}