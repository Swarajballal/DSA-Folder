#include <iostream>
#include <vector>
using namespace std;

int finduniquelement(vector<int>arr)
{
    int ans = 0;                         // starting from 0 beacuse 0 xor with any element makes no change hence iniialized with 0 (check xor truth table) 0 xor 0 is 0 and also 1 xor 0 is 1 hence no change
    for (int i = 0; i < arr.size(); i++) // traversing the array
    {
        ans = ans ^ arr[i]; // ans ^ xor arr[i] (xor truth table) 0 xor 0 is 0 and also 1 xor 0 is 1 hence no change
    }
    return ans; // returning the unique element
}
int main()
{
    int n;
    cout << "Enter the size of the array: " << endl; // taking input from the user
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl; // taking input from the user
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueelement = finduniquelement(arr);
    cout << "The unique element is: " << uniqueelement << endl;
    return 0;
}