// 349. Intersection of Two Arrays
// Easy
// 4.8K
// 2.1K
// Companies
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000

Intuition : The code aims to find the intersection of two arrays, nums1 and nums2.We use a map to count the frequency of numbers in nums1 and iterate through nums2 to find the common numbers.

                                                                  Approach :

    Create a map m to store the frequency of numbers in nums1.Iterate through nums1 and count the frequency of each number in m.Iterate through nums2 and check if each number is present in m.If a number is found in both nums2 and m,
            and its frequency is greater than 0,
            add it to the ans vector and set its count to 0 in m to avoid duplicates.Return the ans vector containing the intersection of the two arrays.Complexity :

    Time complexity : O(n + m),
            where n is the size of nums1 and m is the size of nums2.The code iterates through both arrays once,
            and the operations inside the loops take constant time on average.Space complexity : O(n),
            where n is the size of nums1.The map m stores the frequency of numbers in nums1,
            which can be at most the size of nums1.

            Code class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    map<int, int> m; // to keep the count of the numbers
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
      m[nums1[i]]++; // increment the count
    }

    for (int i = 0; i < nums2.size(); i++)
    {
      auto it = m.find(nums2[i]);          // finding if nums2 element is present in map
      if (it != m.end() && it->second > 0) // go untill the end of the map and also check if count of a number is greater then 0
      {
        ans.push_back(nums2[i]); // push back the number present in both map and nums2 that is present in both nums1 and nums2
        m[nums2[i]] = 0;         // once added make count of that element 0 so that the number is not repeated
      }
    }
    return ans;
    // and finally return the answer
  }
};

// or using set
//  vector<int> ans;
//         set<int> nums1_set;
//         for(int i =0; i < nums1.size(); i++)
//         {
//             nums1_set.insert(nums1[i]);
//         }

//         for(int i = 0; i < nums2.size(); i++)
//         {
//             if(nums1_set.find(nums2[i]) != nums1_set.end())
//             {
//                 ans.push_back(nums2[i]);
//                 nums1_set.erase(nums2[i]);
//             }
//         }
//         return ans;