#include<iostream>
using namespace std;

void factorial(int num)
{
    int fact = 1;
    while(num>=1)
    {
        fact = fact*num;
        num--;
    }

    cout<<"Factorial is :"<<fact;
}

int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin >> num;
    factorial(num);
    return 0;
}