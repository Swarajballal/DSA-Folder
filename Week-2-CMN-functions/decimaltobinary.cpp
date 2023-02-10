#include<iostream>
#include<cmath>
using namespace std;

int decimaltobinary(int num)
{
    //Division method
    int binary = 0;
    int i = 0;
    while(num > 0)
    {
        int bit = num%2;            //remainder but bits in reverse order
        binary = bit*pow(10,i++)+binary;  //to reverse the bits we got to get an binary number eqivalent.
        num = num/2;    //next iteration num should be num/2 
    }
    return binary;

}

int main()
{
    int num;
    cout<<"Enter the number you want to convert to binary: ";
    cin >> num;
    int binary = decimaltobinary(num);
    cout<<binary;
}

