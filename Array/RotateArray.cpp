#include <bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[], int low, int high)
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
    int d = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    ReverseArray(arr, 0, d - 1);
    ReverseArray(arr, d, n - 1);
    ReverseArray(arr, 0, n - 1);

    cout << "Rotated Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
