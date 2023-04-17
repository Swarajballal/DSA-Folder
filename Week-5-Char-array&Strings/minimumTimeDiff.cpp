// 539. Minimum Time Difference
// Medium
// 1.5K
// 237
// Companies
// Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

// Example 1:

// Input: timePoints = ["23:59","00:00"]
// Output: 1
// Example 2:

// Input: timePoints = ["00:00","23:59","00:00"]
// Output: 0

// Constraints:

// 2 <= timePoints.length <= 2 * 104
// timePoints[i] is in the format "HH:MM".

#include <bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;
    // step 1 convert all strings hours and minutes to
    int n = timePoints.size(); // storing the size of timePoints vector in n
    for (int i = 0; i < n; i++)
    {
        // storing current ith  string of timePoints string vector
        string curr = timePoints[i];
        // substring of hours
        int hours = stoi(curr.substr(0, 2)); // storing hours using substr and also converting string to int using stoi(string to int)
        // substring of minutes
        int mins = stoi(curr.substr(3, 2)); // storing minutes using substr and also converting string to int using stoi(string to int)

        int totalMins = (hours * 60) + mins; // since 1 hour = 60 mins and rest of the mins addition

        minutes.push_back(totalMins); // pushing the total minutes in minutes vector
    }
    // step 2: sort the vector
    //  so for making the comparison simple we will sort the minutes vector so that we get the minimum difference from adjaacent element and dont have to compare current element with all others
    sort(minutes.begin(), minutes.end()); // sorting the minutes vector

    // step 3: find the minimum difference

    int mini = INT_MAX;     // initializing the diff with max value
    int k = minutes.size(); // storing the size of minutes vector in k
    for (int i = 0; i < k - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i]; // finding the difference between adjacent elements
        mini = min(mini, diff);                 // finding the minimum difference
    }

    // step 4: since clock is circular so we need to check the difference between last and first element since it could be 11:59pm  that is 1439 minutes and next minute could be 00:00 that is 0 minutes is 12:00 am which is 00:00 so the differnce by above would be 1439 which is wrong it has to be 1 i.e 12:00 am - 11:59 pm which is 1 minute.
    //  step 3: checks difference between adjacent element but since clock is circular we need to check the difference between last and first element that is above 11:59 pm to 12:am next day or 00:00 edge case

    int lastmin = (minutes[0] + 1440) - minutes[k - 1]; // 1440 because 24*60 = 1440 so when it is 12 am or 00:00 we get 0 + 1440 - 1439(11:59 pm) = 1
    mini = min(mini, lastmin);                          // finding the minimum difference
    return mini;                                        // returning the minimum difference
}

int main()
{
    vector<string> timePoints = {"00:00", "23:59", "00:00"};
    int result = findMinDifference(timePoints);
    cout << "The minimum difference is: " << result << endl;
    return 0;
}