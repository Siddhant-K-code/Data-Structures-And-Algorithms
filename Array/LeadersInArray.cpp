#include <bits/stdc++.h>
using namespace std;

void PrintLeaders(int arr[], int size)
{
    int maxValue = arr[size - 1];

    cout << maxValue << endl;

    for (int i = size - 2; i >= 0; i--) {
        if (maxValue <= arr[i]) {
            maxValue = arr[i];
            cout << maxValue << endl;
        }
    }
}

int main()
{
    int arr[] = { 5, 3, 20, 15, 8, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    PrintLeaders(arr, n);
}
