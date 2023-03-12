#include<iostream>
#include<vector>
using namespace std;

// method 1 using sort STL
//sort(arr.begin(), arr.end());  time complexity o(nlogn) and space complexity o(n)


//method 3 using pointer time complexity o(n) and space complexity o(1)

// void moveneg(vector<int> arr)
// {
//     int low = 0, mid = 0, high = arr.size()-1;
//     while(mid <= high)
//     {
//         if(arr[mid] < 0)
//         {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else
//         {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }

//     for(int i=0; i<arr.size(); i++)
//         cout<<arr[i]<<" ";
// }

// int main()
// { 
//     vector<int> arr {-3,1,2,-5,6,-3,-2};
//     moveneg(arr);
//     return 0;
// }


// Dutch National Flag Algorithm
//it is like 2 pointer approach

void moveneg(vector<int> arr)
{
    int low = 0, high = arr.size()-1;
    while(low < high)
    {
        if(arr[low] < 0)
        {       
            low++;        
        }
        else if(arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
            
        }
    }
    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<" ";

}

int main()
{ 
    vector<int> arr {-3,1,2,-5,6,-3,-2};
    moveneg(arr);
    return 0;
}
