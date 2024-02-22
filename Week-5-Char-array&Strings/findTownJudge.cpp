// 997. Find the Town Judge
// Solved
// Easy
// Topics
// Companies
// In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

// If the town judge exists, then:

// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.
// You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.

// Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

// Example 1:

// Input: n = 2, trust = [[1,2]]
// Output: 2
// Example 2:

// Input: n = 3, trust = [[1,3],[2,3]]
// Output: 3
// Example 3:

// Input: n = 3, trust = [[1,3],[2,3],[3,1]]
// Output: -1
 

// Constraints:

// 1 <= n <= 1000
// 0 <= trust.length <= 104
// trust[i].length == 2
// All the pairs of trust are unique.
// ai != bi
// 1 <= ai, bi <= n

#include<bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<string>>& trust)
{
    vector<int> degree(n+1,0);
    for(auto &t : trust)
    {
        --degree[t[0]];
        ++degree[t[1]];
    }

    for(int i = 0; i <= n; i++) {
        if(degree[i] == n-1) return i;
    }
    return -1;
}

int main()
{
    int T;
    cout <<"Enter the number of test cases: ";
    cin >> T;

    while(T--)
    {
        int n,N;
        cout << "Enter the size of trust array: ";
        cin >> N;
        cout << "Enter the number of people in town: ";
        cin >> n;
        vector<vector<int>> trust;
        for(ini i = 0; i < N; i++)
        {
            int a,b;
            cout << "Enter two number for " << i+1 << " th index: ";
            cin >> a >> b;
            trust.push_back({a, b});
        }
        cout << "Number of people in town: "<< n << endl;
        int result = findJudge(n,trust);

        if(trust != -1)
        {
            cout << "Judge exsists at label " << result << endl; 
        }
        else{
            cout << "Judge don't exsists";
        }

        return 0;
    }
}
