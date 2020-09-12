/* Josephus Problem */

#include <bits/stdc++.h>
using namespace std;
int jos(long long int n, long long int k)
{
    if (n == 1)
        return n;
    return (jos(n - 1, k)                + k - 1)                    % n                + 1;
    //     |get val from 0 to n-1|     |to shift & k a diff|      |total n terms|    |to getting overall values of 1 to n|
}

int main(){
    long long int n=7;
    long long int k=3;
    cout<<"Survivor is: "<<jos(n,k);
}
