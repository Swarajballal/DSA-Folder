
// C++ implementation to set the kth bit
#include<iostream>
using namespace std;
 
int setKthBit(int n, int k)
{
    return ((1 << k) | n);   //  if k = 2 then left shift operator so 1 shifted by kth position i.e 100 if k =3 then 1000 and then or with n in binary
}

//so n = 10 in binary is 1010 and 1<<k = 100 so 1010 or 100 gives 1110 i.e 14 in decimal
 
int main()
{
    int n,k;
    cout<<"Enter the value of number: "<<endl;
    cin >> n;
    cout<<"Enter the value of ith position shift to set bit:"<<endl;
    cin >> k;
    cout << "Kth bit set number = "
         << setKthBit(n, k);
    return 0;
}