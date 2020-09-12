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

int main()
{
    cout << "Sum is:" << fun(253); // => 10
}

/*
    253 => fun(25)+3 => fun(2)+5+3 , since fun(2<10, base case) => 2 + 5 + 3 => 10
*/