#include <bits/stdc++.h>
using namespace std;

void takeInput(int arr[], int n)
{
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int uniqueElement(int arr[], int n)
{
    unordered_map<int, int> freq;
    int unique = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int val;
    for (auto it : freq)
    {
        if (it.second < unique)
        {
            unique = it.second;
            val = it.first;
        }
    }
    return val;
}

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;

    cin >> n;
    int arr[n];
    takeInput(arr, n);
    int ans = uniqueElement(arr, n);
    cout << "The unique element in the array is: " << ans;

    return 0;
}