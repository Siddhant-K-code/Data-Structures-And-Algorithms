#include <bits/stdc++.h>
using namespace std;
bool isPal(char str[], int s, int e)
{
    // if there is only one character
    if (s == e)
        return true;
    // first and last characters
    if (str[s] != str[e])
        return false;
    // check the palindrome of middle substring
    if (s < e + 1)
        return isPal(str, s + 1, e - 1);
}
bool isPalindrme(char str[])
{
    int n = strlen(str);
    if (n == 0)
        return true;
    return isPal(str, 0, n - 1);
}
int main()
{
    /* Run One String at a time */
    char str[] = "aabaa"; // => Yes
    // char str[] = "aahbaa"; // => No
    // char str[] = "Siddhant"; // => No
    if (isPalindrme(str))
        cout << "Yes";
    else
    {
        cout << "No";
    }
}
