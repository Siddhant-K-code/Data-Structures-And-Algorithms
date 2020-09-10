#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1); // Not Tail Recursive
}

int factTail(int n, int k = 1)
{
    if (n == 0)
    {
        return k;
    }
    return factTail(n - 1, n * k); // Tail Recursive
}

int main()
{
    cout << fact(5) << endl; // => 120
    cout << factTail(5);     // => 120
}