// Let say students are told to pick a language between x and y, so n1 students pick x and n2 students pick y and n3 students pick both x and y. find the total number of students.
// So total number of students = n1 + n2 - n3;
// -n3 because we are adding n3 twice, so we need to subtract it once. they are included in both x and y.
// This is called inclusion-exclusion principle or addition theorem in set theory.

#include<bits/stdc++.h>
using namespace std;

int divisibl(int n, int x, int y)
{
    int c1 = n/x;  // numbers which are divisible by x
    int c2 = n/y; // numbers which are divisible by y
    int c3 = n/(x*y); // numbers which are divisible by both x and y

    return c1+c2-c3;   // inclusion-exclusion principle
}

int main()
{
    int n,x,y;
    cout << "Enter the number to be divided: ";
    
    cin >> n;
    cout << "Enter the number x: ";
    cin >> x;
    cout << "Enter the number y: ";
    cin >> y;
    cout << "Total number of multiples of " << x << " and " << y << " are: " << divisibl(n,x,y) << endl;
    return 0; 
}


// output for 40, 5, 7 is 12 because 5 has 8 multiples (5, 10, 15, 20, 25, 30, 35, 40) and 7 has 5 multiples (7, 14, 21, 28, 35) and 35 is common in both, so 8+5-1 = 12