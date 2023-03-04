#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n, greater<int>());
    // sort(arr, arr + n, compare);
    // reverse(arr, arr + n);
    // Print the array
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}