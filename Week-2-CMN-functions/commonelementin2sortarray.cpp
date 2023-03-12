#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> findcommonelethreearray(int*A, int*B, int*C, int n1, int n2, int n3)
{
    // method 1 with time complexity O(n1+n2+n3) and space complexity O(min (n1,n2,n3))) so it can be o(n1) or o(n2) or o(n3) that much element would be inserted in set
    // vector<int> ans;
    // set<int>st;
    // int i = 0, j = 0, k = 0;
    // while(i < n1 && j < n2 && k < n3)
    // {
    //     if(A[i] == B[j]  && B[j] == C[k])
    //     {
    //         // ans.push_back(A[i]);  // because we are getting duplicate element so use set instead of vector
    //         st.insert(A[i]);  // set will not allow duplicate element
    //         i++;j++;k++;
    //     }
    //     else if(A[i] < B[j])
    //     {
    //         i++;
    //     }
    //     else if(B[j] < C[k])
    //     {
    //         j++;
    //     }
    //     else 
    //     {
    //         k++;
    //     }
    // }

    // for(auto i:st)   // for set we use auto auto means datatype will be decided by compiler wedont use int in set because it will give error
    // {
    //     ans.push_back(i); //pushing set element in vector
    // }
    // return ans;

    //method 2 above we use extra soace of set but we can do it without using extra space
    //remove duplicate element from array first then use above method
     
     //for removing duplicate element from array we can use 2 pointer method
        //time complexity O(n1+n2+n3) and space complexity O(1)
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2 && k < n3)
        {
            if(A[i] == B[j]  && B[j] == C[k])
            {
                ans.push_back(A[i]);
                i++;j++;k++;
                while(i < n1 && A[i] == A[i-1])  // removing duplicate element from array
                    i++;
                while(j < n2 && B[j] == B[j-1])
                    j++;
                while(k < n3 && C[k] == C[k-1])
                    k++;
            }
            else if(A[i] < B[j])
            {
                i++;
            }
            else if(B[j] < C[k])
            {
                j++;
            }
            else 
            {
                k++;
            }
        }
        return ans;


}
int main()
{
    int n1 = 6, A[] = {1, 5, 10, 20, 40, 80};
    int n2 = 5, B[] = {6, 7, 20, 80, 100};
    int n3 = 8, C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> result = findcommonelethreearray(A, B, C, n1, n2, n3);
    if(result.size() == 0)
        cout<<"No common element";
    else
        for(int i = 0; i < result.size(); i++)
            cout<<result[i]<<" ";
    return 0;
}