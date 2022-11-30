#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    // Implement binry search
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n;
    n = sizeof(arr) / sizeof(int);

    int key;
    cout << "Enter the search element: ";
    cin >> key;

    int i = binarySearch(arr, n, key);

    if (i != 0)
    {
        cout << "Element found at " << i << endl;
    }
    else
    {
        cout << "Not found" << endl;
    };

    return 0;
}