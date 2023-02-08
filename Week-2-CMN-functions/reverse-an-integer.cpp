#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,rem;
    cout<<"Enter the Number to be reversed: "<<endl;
    cin >> n;
    int num = n;
    while(n!=0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n /= 10;
    }
    cout<<"Reverse of "<< num <<" is "<<rev;
}