// string isPalindrome(string S)
// {
// 		int N = S.length();
//     for (int i = 0; i < (N/2)-1; i++) {
// 		    if (S[i] != S[N-i]) {
//             return "No";
//         }
//     }
//     return "Yes";
// }


// Solution:

string isPalindrome(string S)
{
    int N = S.length();
    for (int i = 0; i < (N/2); i++) {  // Fix
	    if (S[i] != S[N-i-1]) { // Fix
            	return "No";
        }
    }
    return "Yes";
}