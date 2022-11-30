#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {2, 3, 5, 6, 4, 7, 9, 12};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cout << "Enter the search element: ";
    cin >> key;

    int i = linearSearch(arr, n, key);

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