/* Given a rope of length n, you need to find maximum number of pieces you can make such that length of every piece is in set {a,b,c} for given three values a,b and c*/

#include <bits/stdc++.h>
using namespace std;

int Cuts(int n, int a, int b, int c)

{
    if (n == 0)
        return 0;
    if (n < 1)
        return -1;

    int res = max({Cuts(n - a, a, b, c), Cuts(n - b, a, b, c), Cuts(n - c, a, b, c)});

    if (res == -1)
        return -1;

    return (res + 1);
}

int main()
{

    cout << "Maximum Pieces are: " << Cuts(23, 11, 9, 12) << endl; // => 2
    cout << "Maximum Pieces are: " << Cuts(5, 2, 5, 1) << endl;    // => 5
    cout << "Maximum Pieces are: " << Cuts(5, 4, 2, 6);            // => -1

    return 0;
}
