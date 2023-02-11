#include<iostream>
#include<cmath>
using namespace std;

int decimaltobinary(int num)
{
    //Division method
    // int binary = 0;
    // int i = 0;
    // while(num > 0)
    // {
    //     int bit = num%2;            //remainder but bits in reverse order   and %x where x is the base to be converted into here binary hence 2
    //     binary = bit*pow(10,i++)+binary;  //to reverse the bits we got to get an binary number eqivalent.
    //     num = num/2;    //next iteration num should be num/2   same as above logic for 2
    // }
    // return binary;

    //bitwise method 
    //more efficent method
    int binary = 0;
    int i=0;
    while(num > 0)
    {
        int bit = (num & 1);  //bitwise and with 1( we will get first bit)
        binary += bit * pow(10, i++);
        num = num >> 1;  //right shift by 1 bit  (so we get the nexy bit bu right shift right most bit that is the first bit will be ignored)
    }
    return binary;
}

int main()
{
    int num;
    cout<<"Enter the number you want to convert to binary: ";
    cin >> num;
    int binary = decimaltobinary(num);
    cout<<binary<<endl;
}





