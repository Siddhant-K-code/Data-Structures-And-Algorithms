#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n <= 0)
        return;
    cout << n << " ";
    fun(n - 1); // Tail Recursive (Faster)
}
int main()
{
    fun(5);
    fun(3);
}
