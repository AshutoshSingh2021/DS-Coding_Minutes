#include <iostream>
using namespace std;

void takeInput(int arr[], int n)
{
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{
    cout << "The resultant array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;

    cin >> n;
    int arr[n];
    takeInput(arr, n);
    swapAlternate(arr, n);
    printArray(arr, n);
    return 0;
}