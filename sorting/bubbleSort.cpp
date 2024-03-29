#include <iostream>
using namespace std;

// Sort the elements in increasing order
void bubble_sort(int a[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        for (int j = 0; j <= n - 1 - times; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    bubble_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}