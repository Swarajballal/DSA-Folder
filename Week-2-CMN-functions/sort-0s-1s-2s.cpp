    #include<iostream>
#include<vector>
using namespace std;
//  first method using STL sort
//sort(arr.begin(), arr.end());   // mix of quick sort heap sort and insertion sort T-o(nlogn) S-o(n) worst case T-o(n^2) S-o(1)


//  second method usinig count
// void printvector(vector<int> ans)
// {
//     for(int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// void pushinvector(vector<int> arr, int count0, int count1, int count2)
// {
//     vector<int> ans;

//     for(int i  = 0; i<count0; i++)
//     {
//         ans.push_back(0);
//     }
//     for(int i = 0; i < count1; i++)
//     {
//         ans.push_back(1);
//     }
//     for(int i = 0; i < count2; i++)
//     {
//         ans.push_back(2);
//     }

//     printvector(ans);
// }

// void function(vector<int> arr)
// {
//     int count0 = 0, count1 = 0, count2 = 0;
//     for(int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i] == 0)
//         {
//             count0++;
//         }
//         else if(arr[i] == 1)
//         {
//             count1++;
//         }
//         else
//         {
//             count2++;
//         }
//     }
//    pushinvector(arr, count0, count1, count2);

// }


// int main()
// {
//     vector<int> arr = {0, 1, 2, 0, 1, 2, 0};
//     function(arr);

//     return 0;
// }


//method 2 alternative leetcode solution
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {

//       int zeros,ones,twos;
//       zeros=ones=twos=0;

//       for(int i = 0; i<nums.size(); i++)
//         {
//             if(nums[i] == 0)
//             {
//                 zeros++;
//             }
//             else if(nums[i] == 1)
//             {
//                 ones++;
//             }
//             else
//             {
//                 twos++;
//             }
//         }

//         int i = 0;
//         while(zeros--)
//        {
//            nums[i] = 0;
//            i++;
//        } 
//        while(ones--)
//        {
//            nums[i] = 1;
//            i++;
//        }
//        while(twos--)
//        {
//            nums[i] = 2;
//            i++;
//        }

//     }    // time complexity O(n) and space complexity O(1)  o(1) because only 3 variables are used
// };



// method 3  3 pointer apprach (inplace)

void sort012(vector<int> arr)
{
    int low = 0, mid = 0, high = arr.size() - 1;

    while(mid <= high)   // 0 to mid-1 will be 0, mid to high will be 1 and high+1 to n-1 will be 2
    {
        if(arr[mid] == 0)   // if mid is 0 then swap with low and increment both low and mid
        {
            swap(arr[low], arr[mid]);  // swap arr[low] and arr[mid]
            low++;
            mid++;
        }

        else if(arr[mid] == 1)  // if mid is 1 then increment mid
        {
            mid++;
        }

        else
        {
            swap(arr[mid], arr[high]);  // if mid is 2 then swap with high and decrement high
            high--;
        }
    }

    
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

}

int main()
{
    vector<int> arr = {0, 1, 2, 0, 1, 2, 0};
    sort012(arr);
    return 0;
}