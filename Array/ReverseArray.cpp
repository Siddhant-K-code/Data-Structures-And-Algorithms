#include <bits/stdc++.h>
using namespace std;

void Reversing(int arr[], int low, int high)
{
    while (low < high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main()
{

    int arr[] = { 10, 20, 30, 40, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
    Reversing(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
