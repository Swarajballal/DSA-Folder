/*HELP RAMU  CodeBlocks
Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

Public transport is not free. There are 4 types of tickets:

A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.

Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.

Input Format:
Each Test case has 4 lines which are as follows:

The first line contains four integers c1, c2, c3, c4 (1 ≤ c1, c2, c3, c4 ≤ 1000) — the costs of the tickets. The second line contains two integers n and m (1 ≤ n, m ≤ 1000) — the number of rickshaws and cabs Ramu is going to use. The third line contains n integers ai (0 ≤ ai ≤ 1000) — the number of times Ramu is going to use the rickshaw number i. The fourth line contains m integers bi (0 ≤ bi ≤ 1000) — the number of times Ramu is going to use the cab number i.

Constraints:
Output Format
Print a single number — the minimum sum of ruppes Ramu will have to spend on the tickets.

Sample Input
2
1 3 7 19
2 3
2 5
4 4 4
4 3 2 1
1 3
798
1 2 3
Sample Output
12
1 */


#include<iostream>
using namespace std;



int findMinCost(int c1, int c2, int c3, int c4, int n, int m, int ricks[], int cabs[])
{
    int rickShawCost = 0;  // total cost of rickshaw

    for(int i = 0; i < n; i++)
    {
        rickShawCost += min(c1*ricks[i], c2);   // minimum of the cost of 1 ticket for 1 ride on some rickshaw or cab and the cost of ticket for an unlimited number of rides on some rickshaw or on some cab
    }

    rickShawCost = min(rickShawCost, c3);   // minimum of the total cost of rickshaw and the cost of ticket for an unlimited number of rides on all rickshaws or all cabs

    int cabCost = 0; // total cost of cab

    for(int j = 0; j < m; j++)
    {
        cabCost += min(c1*cabs[j], c2); // minimum of the cost of 1 ticket for 1 ride on some rickshaw or cab and the cost of ticket for an unlimited number of rides on some rickshaw or on some cab
    }

    cabCost = min(cabCost, c3);  // minimum of the total cost of cab and the cost of ticket for an unlimited number of rides on all rickshaws or all cabs


    int finalCost = min(c4, rickShawCost + cabCost);  // minimum of the cost of ticket for an unlimited number of rides on all rickshaws and cabs and the sum of total cost of rickshaw and cab

    return finalCost;  // return the final cost
}

int main()
{
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;

    while(T--)
    {
        int c1,c2,c3,c4;
        cout << "Enter the cost of 1 ticket for 1 ride on some rickshaw or cab: ";
        cin >> c1;
        cout << "Enter the cost of ticket for an unlimited number of rides on some rickshaw or on some cab: ";
        cin >> c2;
        cout << "Enter the cost of ticket for an unlimited number of rides on all rickshaws or all cabs: ";
        cin >> c3;
        cout << "Enter the cost of ticket for an unlimited number of rides on all rickshaws and cabs: ";
        cin >> c4;

        int n,m;
        cout << "Enter the number of rickshaws and cabs Ramu is going to use: ";
        cin >> n;
        cout << "Enter the number of cabs Ramu is going to use: ";
        cin >> m;

        int ricks[1005], cabs[10005];

        cout << "Enter the number of rides :" << endl;

        for(int i = 0; i < n; i++)
        {
            cout << "Enter the number of times Ramu is going to use " << i + 1 << " rickshaw: ";
            cin >> ricks[i];
        }

        for(int j = 0; j < m; j++)
        {
            cout << "Enter the number of times Ramu is going to use " << j + 1 << " cab: ";
            cin >> cabs[j];
        }

        int finalMinCost = findMinCost(c1, c2, c3, c4, n, m, ricks, cabs);

        cout << "The minimum sum of ruppes Ramu will have to spend on the tickets: " << finalMinCost << endl;
    }

    return 0;    
}