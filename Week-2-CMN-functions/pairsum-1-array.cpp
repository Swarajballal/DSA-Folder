#include <iostream>
#include <vector>
using namespace std;

void pairsum(vector<int> arr, int sum)
{
    bool flag = false;                   // flag to check if pair exists or not
    for (int i = 0; i < arr.size(); i++) // loop to traverse the array
    {
        int element = arr[i];                    // storing the element in a variable
        for (int j = i + 1; j < arr.size(); j++) // loop to traverse the array from the next element
        {
            if (arr[i] + arr[j] == sum) // checking if the sum of the pair is equal to the sum
            {
                cout << "Sum of numbers being " << sum << " are " << element << " and " << arr[j] << endl;
                flag = true; // if pair exists, flag is set to true
            }
        }
    }
    if (flag != true)
    {
        cout << "No such pair exists" << endl;
    }
}
int main()
{
    int sum;
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Enter the sum to be found: " << endl;
    cin >> sum;
    pairsum(arr, sum);
    return 0;
}