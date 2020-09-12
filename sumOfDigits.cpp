/* 253 / 10 => 25(int) {last term dropped}*/
/* 253 % 10 => 3 {last term }*/

#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if (n < 10)
        return n;
    return fun(n / 10) + n % 10;
}
