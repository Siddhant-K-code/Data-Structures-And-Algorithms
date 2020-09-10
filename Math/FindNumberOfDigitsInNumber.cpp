#include <bits/stdc++.h>
using namespace std;

/* Iterative Solution */

int IterativeCountDigit(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    cout << count;
    return 0;
}

/* Recursive Solution */

int RecurCountDigit(long n)
{
    if (n == 0)
        return 0;
    return 1 + RecurCountDigit(n / 10);
}

/* Logarithmic Solution */

int LogCountDigit(long n)
{
    return floor(log10(n) + 1);
}

int main()
{
    IterativeCountDigit(5686); // => 4
    RecurCountDigit(5686);     // => 4
    LogCountDigit(5686);       //=> 4 (FASTEST)
}