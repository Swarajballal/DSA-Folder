#include<iostream>
#include<cmath>
using namespace std;

// int binarytodecimal(int binary)
// {
//     int decimal = 0;
//     int i = 0;
//     while(binary > 0)
//     {
//         int bit = binary%10;      //always num % x where x is the base of the number to be converted into here into decimal hence 10 in binary conversion 2
//         decimal += bit*pow(2, i++);
//         binary = binary/10;    //same as above logic for divide by 10  
//     }
//     return decimal;

// }


// int main()
// {
//     int binary;
//     cout<<"Enter the binary number: ";
//     cin >> binary;
//     int decimal = binarytodecimal(binary);
//     cout<<"The decimal number is: "<<decimal<<endl;
//     return 0;
// }



//bitwise operator better solution cant take input as int because by default computer converts num to binary

int binarytodecimal(string binary)
{
    int decimal = 0;
    int j = 0;
  for(int i = binary.length()-1; i>=0; i--)
  {
    if(binary[i] == '1')
    {
        decimal += pow(2, j);
    }
    j++;
  }
    return decimal;

}
int main()
{
    string binary;
    cout<<"Enter the binary number: ";
    cin >> binary;
    int decimal = binarytodecimal(binary);
    cout<<"The decimal number is: "<<decimal<<endl;
    return 0;
}