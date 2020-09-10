#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n <= 0)
        return;
    fun(n - 1); // Not A Tail Recursive
    cout << n << " ";
}

void funTail(int n, int k = 1)
{
    if (n <= 0)
        return;
    cout << k << " ";
    funTail(n - 1, k + 1); // Tail Recursive, faster
}

int main()
{
    fun(5);
    funTail(5);
}