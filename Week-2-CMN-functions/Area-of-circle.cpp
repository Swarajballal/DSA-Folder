#include<iostream>
using namespace std;

void area(int r)
{
    float area = 0;
    area = 3.14*r*r;
    cout<<"Area of Circle for radius "<<r<<" is: "<<area;
}

int main()
{
    int r;
    cout<<"Enter the radius of circle: ";
    cin >> r;
    area(r);
    return 0;
}