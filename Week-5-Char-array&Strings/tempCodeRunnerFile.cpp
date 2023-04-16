int main()
{
    string s = "aba";
    bool result = validPalindrome(s);

    if(result)
    {
        cout << "It is possible to make a palindrome by removing one character";
    }
    else
    {
        cout << "It is not possible to make a palindrome by removing one character";
    }
    return 0;
}